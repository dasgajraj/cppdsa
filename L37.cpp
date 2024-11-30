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



int main()
{
    int  arr[100],n;
    cout<<"give the elements you want to add in array: ";
    cin>>n;
    for(int i=0;i<n;i++) cin>>arr[n-i-1];

    print(arr,n);

    
cout<<endl<<endl<<"Everything Is Fine\n=== Code Execution Successful ==="<<endl<<endl;
    return 0;
}
