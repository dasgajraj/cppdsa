#include<bits/stdc++.h>
using namespace std;

void print(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void print_vector(vector<int> &arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}



int main()
{
    // vector<int> nums={1,2,3,4,5,6,7};
    vector<int> nums={-1,-100,3,99};int k;cin>>k;
    vector<int> temp;
    int n=nums.size();
    for(int i=0;i<k;i++){temp[i]=nums[k];}
    for(int i=0;i<n;i++){nums[i]=nums[n-k-i];}
    for(int i=0;i<n;i++){nums[n-k-1]=temp[i];}
    print_vector(nums,nums.size());

    
cout<<endl<<endl<<"Everything Is Fine\n=== Code Execution Successful ==="<<endl<<endl;
    return 0;
}