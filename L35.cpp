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
void school_to_home(int st, int end)
{
    cout<<"present position is "<<st<<" destination is "<<end<<endl;;
    // int st=0;
    if(st==end) {cout<<endl<<"REACHED"<<endl; return;}
    school_to_home(st++,end);
}

void saydigits(int n)
{
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    if (n==0) return;
    int dig=n%10;
    saydigits(n/10);
    cout<<arr[dig]<<" ";
}

int main()
{
    int n;
    cin>>n;
    saydigits(n);
    
cout<<endl<<endl<<"Everything Is Fine\n=== Code Execution Successful ==="<<endl<<endl;
    return 0;
}
