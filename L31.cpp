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

void update(int n)
{n++;}
void update2(int &n)
{n++;}

int pass_by_refrence( int n)
{
    int num=n;
    int& ans=num;
    return ans;
}
int* pass (int n)
{
    int* ptr =&n;
    return ptr;
}
int get_sum(int arr[],int n)
{
    int sum =0;
    for(int i=0;i<n;i++) sum+=arr[i];
    return sum;
}
int main()
{
    // int i=5;
    // int&j =i;
    // j++;
    // cout<<j<<endl;

    int n=5;
    cout<<"Before :: ::"<<n<<endl;
    update2(n);
    cout<<"After :: ::"<<n<<endl;
    pass_by_refrence(n);
    pass (n);

    // now we will create a variable size arrayṇ
     cin>>n;
     int * arr= new int[n];
     for( int i=0;i<n;i++)
     {
        cin>>arr[i];
     }
     cout<<"Answer of sum is "<<get_sum(arr,n);

cout<<endl<<endl<<"Everything Is Fine\n=== Code Execution Successful ==="<<endl<<endl;
    return 0;
}
