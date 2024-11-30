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
    cout<<"Now we will do pointers\n";
    // int num=3;
    // cout<<num<<endl;
    // int *ptr=&num;
    // cout<<"This will show address of num "<<num<<" Which is "<<ptr<<endl;
    // cout<<"This will show value at address "<<ptr<<" Which is "<<*ptr<<endl;

    int num=5;
    int a = num;
    cout<<"before "<<num<<endl;
    a++;
    // cout<<num<<endl;
    cout<<"after "<<num<<endl;

    int *p = &num;
    cout<<"before "<<num<<endl<<p<<endl;
    (*p)++;
    cout<<"after "<<num<<endl<<p<<endl;
    
cout<<endl<<endl<<"Everything Is Fine\n=== Code Execution Successful ==="<<endl<<endl;
    return 0;
}
