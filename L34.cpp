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

int twokipower (int pow, int base)
{
    int result = 1;
    if (pow<1) return result;
    result= base*twokipower(--pow,base);
}
int factorial (int n)
{
    if(n==1||n==0) return 1;
    return n*factorial(n-1);
}
int fibbonacci(int n)
{
    if(n==1) return 0;
    if (n==2) return 1;

    return fibbonacci(n-1)+fibbonacci(n-2);
}
void recursiveprint (int n)
{
    // if (n==0) return;
    if (n==0) return;
    cout<<n<<endl;
     recursiveprint(n-1);
    // cout<<n<<" ";
}

int main()
{
     int n=2;
     cout<<twokipower(4,2)<<" ::answer 16 ana chahiye\n";
     int a=3;
     cout<<factorial(a)<<"  ::answer 6  ana chahiye\n";
     int b=10;
     cout<<fibbonacci(b)<<" ::answer 34 ana chahiye\n";
     int count=10;
     recursiveprint(count);

    
cout<<endl<<endl<<"Everything Is Fine\n=== Code Execution Successful ==="<<endl<<endl;
    return 0;
}
