#include<bits/stdc++.h>
using namespace std;
void movezeroes(int arr[],int n){
    int i=0,j=n-1;
    while(i<j){ if(arr[i]!=0) i++;
    else if(arr[j]==0) j--;
    else swap(arr[i++],arr[j--]);
    }
}
void mergee(int arr1[],int arr2[],int arr3[],int m,int n,int o)
{
    int i=0,j=0,k=0;

    while(i<m&& j<n)
    {
        if(arr1[i]<arr2[j]) arr3[k++]=arr1[i++];
        else arr3[k++]=arr2[j++];
    }
    while(i<m) arr3[k++]=arr1[i++];
    while(j<n) arr3[k++]=arr2[j++];
}
void print(int arr[],int n,int start=0)
{
    for (int i=start;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void print_vector(vector<int> &arr,int n,int start=0)
{
    for(int i=start;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void input(int arr[],int n)
{
    for(int i=0;i<n;i++) cin>>arr[i]; 
}
void swap(int&n,int &m )
{
    int temp=n;
    n=m;
    m=temp;
}
void reverse(int arr[],int n)
{
    int i=0,j=n-1;
    while(i<j)
    {
        swap(arr[i++],arr[j--]);
    }
}
int main()
{
    // // PROGRAM TO REVERSE AN ARRAY
    // int arr[10];
    // int n;
    // cout<<"what is n:: ";
    // cin>>n;
    // input(arr,n);
    // reverse(arr,n);
    // print(arr,n);

    // // PROGRAM TO MERGE 2 SORTED ARRAY
    // int arr1[10],arr2[10],arr3[10]={0},m,n,o;
    // cout<<"what is m:: ";
    // cin>>m;
    // cout<<"what is n:: ";
    // cin>>n;
    // cout<<"Input arr 1:: \n";
    // input(arr1,m);
    // cout<<"Input arr 1:: \n";
    // input(arr2,n);
    // o=m+n;
    // mergee(arr1,arr2,arr3,m,n,o);
    // cout<<"Sorted Array Is :: \n\n";
    // print(arr3,o);

    // // PROGRAM TO MOVE ZEROS
    // int arr[10],n;
    // cout<<"Give the value of n:: ";
    // cin>>n;
    // cout<<"Input arr :: \n";
    // input(arr,n);
    // movezeroes(arr,n);
    // cout<<"Array after moving zeroes:: \n";
    // print(arr,n);






cout<<endl<<endl<<"Everything Is Fine\n=== Code Execution Successful ==="<<endl<<endl;
    return 0;
}
