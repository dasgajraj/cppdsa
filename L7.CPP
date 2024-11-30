#include<bits/stdc++.h>
using namespace std;

int main()
{
int t=1;

while(t--)
{
    cout<<"LEETCODE PROBLEMS \n";
    cout<<"Q1.\n";
    cout<<"REVERSE A NO.\n";
    int n,rem=0,i,ans=0;
    cin>>n;
    while(n!=0)
    {
        rem=n%10;
        ans=ans*10+rem;
        n/=10;
    }
    cout<<"reversed number is :  "<<ans<<endl;
    
}
    return 0;
}
