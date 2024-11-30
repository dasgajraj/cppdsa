#include<bits/stdc++.h>
using namespace std;

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
void merge(int  arr[], int start , int end)
{
    int mid = (start + end) / 2;
    int l1=mid-start+1,l2= end-mid;

    int * first = new int[l1];                                                                                                                                                                                                                             
    int * second = new int[l2];

// copy values
    int mainindex=start;
    for(int i=0;i<l1;i++) first[i]=arr[mainindex++];
    int k=mid+1;
    for(int i=0;i<l2;i++) second[i]=arr[mainindex++];

    // now we will mergw soretd array
    int index1=0,index2=0;
    mainindex=start;
    while(index1<l1 && index2<l2)
    {
        if(first[index1]<second[index2]) arr[mainindex++]=first[index1++];
        else arr[mainindex++]=second[index2++];
    }
    while(index1<l1)
    {
        arr[mainindex++]=first[index1++];
    }
    while(index2<l2)
    {
        arr[mainindex++]=second[index2++];
    }

}


void merge_sort(int arr[],int start ,int end)
{
    if(start>=end) return;
    int mid=(start+end)/2;

    //left side sort karo
    merge_sort(arr, start , mid);

    //right side sort karo
    merge_sort(arr, mid+1 , end);

    // merge kr do
    merge(arr, start , end);

}


int main()
{
    
    cout<<"now we will do merge sort::\n";
    
    int arr[3]={4,5,22};
    int n=3;
    print(arr,n);
    merge_sort(arr,0,n);
    print(arr,n);

cout<<endl<<endl<<"Everything Is Fine\n=== Code Execution Successful ==="<<endl<<endl;
    return 0;
}
