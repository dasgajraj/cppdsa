#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int n, int key)
{
    int low=0,high=n-1;

    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return -1;
}

int linsear(int arr[], int n, int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}
void print(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    // linear search revision
    int arr_lin[10]={1,2,3,4,5,6,7,8,9,0};
    print(arr_lin,10);
    int pos=linsear(arr_lin,10,456);
    if(pos==-1)
    {
        cout<<"no element found "<<endl;
    }
    else
    {
        cout<<"4 element found at position "<<pos<<endl;
    }

    cout<<"\nnow we will do binary search"<<endl<<endl;
    int arr_bin[11]={0,1,2,3,4,5,45,56,78,89,789};
    print(arr_bin,11);
    int pos_bin=binary_search(arr_bin,11,189);
    if(pos_bin==-1)
    {
        cout<<"no element found "<<endl;
    }
    else
    {
        cout<<"5 element found at position "<<pos_bin<<endl;
    }
cout<<endl<<endl<<"Everything Is Fine"<<endl<<endl;
    return 0;
}
