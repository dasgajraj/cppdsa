#include<bits/stdc++.h>
using namespace std;

int firstoccur(int arr[], int n, int key)
{
    int low = 0, high = n - 1;
    int ans = -1;
    while(low <= high)
    {
        int mid = low + (high - low) / 2;
        if(arr[mid] == key)
        {
            ans = mid;
            high = mid - 1; // update high to find the first occurrence
        }
        else if(arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

int lastoccur(int arr[], int n, int k)
{
    int low = 0, high = n - 1, ans = -1;
    while(low <= high)
    {
        int mid = low + (high - low) / 2;
        if(arr[mid] == k)
        {
            ans = mid;
            low = mid + 1; // update low to find the last occurrence
        }
        else if(arr[mid] < k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

void print(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int totoccur(int arr[],int n,int key)
{

    int first = firstoccur(arr,n,key);
    int last = lastoccur(arr,n,key);
    return last-first+1;
}

int peakindex_normal(int arr[],int n)
{int count=0;
    for (int i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1]){
            count=i;
            break;
        }
    }
    return count;
 }
int peakindex_binary(int arr[],int n)
{int low=0,high=n-1,mid;
while(low<high)
{
    mid=(low+high)/2;
    if(arr[mid]<arr[mid+1])
    {
        low=mid+1;
    }
    if(arr[mid]>arr[mid+1])
    {
        high=mid-1; 
    }
    else
    {
        return low;
    }
}
return -1;
 }
int pivot_binary(int arr[],int n)
{
    int s=0,l=n-1;
    while(s<l)
    {
        int mid=(s+l)/2;
        if(arr[mid]>arr[mid+1])
        {
            s=mid+1;
        }
        else if(arr[mid]<arr[mid+1])
        {
            l=mid-1;
        }
        else
        {
            return l;
        }
    }
}
int pivot_normal(int arr[],int n)
{
    int count;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<arr[i+1])
        {
            count=i;
            break;
        }
    }
    return count;
}
int main()
{
    cout << "\nBinary Search Questions: " << endl;
    cout << "Q first and last position of element in sorted array" << endl;
    int q1[11] = {1, 2, 3, 3,3,3,3,3,3,3,5};
    int key1 = 3;
    print(q1, 11);
    cout << "First occurrence of " << key1 << " in array is at index of " << firstoccur(q1, 11, key1) << endl;  
    cout << "Last occurrence of " << key1 << " in array is at index of " << lastoccur(q1, 11, key1) << endl;  
    cout<<endl<<"Q find total no of occurance pf 3 in a array \n";
    int q2[13]={1,2,3,3,3,3,3,3,3,3,3,3,5};
    int key2=3;
    print(q2,7);
    cout << "Total no of occurance of " << key2 << " in array is "<<totoccur(q2,13,key2)<<endl;

    cout<<endl<<"Q find Peak index in Mountain array \n";
    int q3[9]={1,2,10,9,8,4,3,2,1};
    print(q3,9);
    cout << "Peak index in array is using peakindex_normal"<<peakindex_normal(q3,9)<<endl;
    cout << "Peak index in array is using peakindex_binary"<<peakindex_binary(q3,9)<<endl;

    cout<<endl<<"HW find pivot index in Mountain array \n";
    int hw[10]={10,5,2,0,1,2,3,4,5,6};
    print(hw,10);
    cout<<"pivot index in array using pivot_normal  "<<pivot_normal(hw,10)<<endl;
    cout<<"pivot index in array using pivot_binary  "<<pivot_binary(hw,10)<<endl;
    cout << endl << endl << "Everything Is Fine" << endl << endl;
    return 0;
}