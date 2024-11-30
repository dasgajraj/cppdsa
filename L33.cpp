#include<bits/stdc++.h>
#define pie 3.14
using namespace std;
int score= 15;

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
void funct(int a,int b)
{
    a++;
    b++;
    cout<<a<<b<<endl;
}

double area(double r) {return pie*r*r;}
void b(int & j){cout<<++j<<endl;cout<<score<<" in b "<<endl;}
void af(int & i){cout<<i++<<endl;cout<<++score<<" in a "<<endl;b(i);}

int main()
{
    int r=5,i=5;
    int a=1,b=2;
    cout<<"give the value of area of circle\n";
    cout<<"give its rad :: "; 
    cout<<"area of circle is "<<area(r)<<endl;
    af(i);
    funct(a,b);




    
cout<<endl<<endl<<"Everything Is Fine\n=== Code Execution Successful ==="<<endl<<endl;
    return 0;
}
