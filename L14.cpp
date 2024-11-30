#include<bits/stdc++.h>
// #include<iostream>
using namespace std;

int pivot_element(int arr[],int n)
{
    int low=0,high=n-1;
    int mid=low+(high-low)/2;
    while(low<high)
    {
        if(arr[mid]>=arr[0])
        {
            low=mid+1;
            
        }   

        else{
            high= mid;
        }
        mid=low+(high-low)/2;
    }
    return low;
}
int binserch (int arr[],int n,int k, int low,int high)
{
    int mid=(low+high)/2;
    while(low<=high)
        {
        if(arr[mid]==k)
        {
        return mid;
        }
        else if(arr[mid]>k)
        {
        high=mid-1;
        }
        else
        {
        low=mid+1;
        }
        mid=(low+high)/2;
    }
    return mid;
}
int bin_sear_rotat(int arr[],int n,int k)
{
    int low=0,high=n-1,pos=-1;
    int pivot=pivot_element(arr,n);
    if(arr[pivot]<=k && k<=arr[n-1])
    {
        pos=binserch(arr,n,k,pivot,n-1);
    }
    else
    {
        pos=binserch(arr,n,k,0,pivot-1);
    }
    return pos;
}
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void input(int arr[],int n)
{
    for (int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
}
int sqrut(int n)
{
    int low=0,high=n;
    int mid=(low+high)/2;
    while(low<=high)
    {
        long long int sq=mid*mid;
        if(sq>=INT_MAX)
        {
            return 0;
        }

        if(sq==n)
        {
            return mid;
        }
        else if(sq<n)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
            mid=(low+high)/2;
        }
        return low;

}

int main()
{
    // cout<<"Binary Search Questions "<<endl;
    // int q1[5]={3,8,10,17,1};
    // print(q1,5);
    // cout<<"Pivot element is in array :"<<q_1(q1,5)<<endl;
    // cout<<endl;
    cout<<"Q to find an element in Rotated array"<<endl;
    int q2[5]={7,9,1,2,3};
    int key=9;
    print(q2,5);
    cout<<"The element key "<<key<<" is present at INDEX: "<<bin_sear_rotat(q2,5,key)<<endl;//answer shiuld be 3
    cout<<"Q Square root using binary search "<<endl;
    int n=8;
    // input(q_3,n);
    // print(q_3,n);
    cout<<"Square root of given number "<<n<<" is :: "<<sqrut(n)<<endl;
    



cout<<endl<<endl<<"Everything Is Fine"<<endl<<endl;
    return 0;
}
