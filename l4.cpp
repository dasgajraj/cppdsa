#include<bits/stdc++.h>
using namespace std;

int main()
{
int t=1;int n;
// cin>>t;
cout<<"give value of n"<<endl;
cin>>n;
while(t--)
{
    cout<<"Pattern 1";
    cout<<endl;
        for(int i=0; i<n ;i++)
        {
            for (int j=1;j<=n;j++)
            {
                cout<<j;

            }
            cout<<endl;
        }
    cout<<"Pattern 2";
    cout<<endl;
        for(int i=1; i<=n ;i++)
        {
            for (int j=1;j<=n;j++)
            {
                cout<<n-j+1;

            }
            cout<<endl;
        }
    cout<<"Pattern 3";
    cout<<endl;
    int count=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<count<<"\t";
            count++;
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"Pattern 4";
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<"Pattern 5";
    cout<<endl;
    for(int i=0;i<=n;i++)
    {
        for (int j=0;j<i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
    cout<<"Pattern 6";
    cout<<endl;
    count=1;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<count<<"\t";
            count++;
        }
        cout<<endl;
    }

    cout<<"Pattern 7";
    cout<<endl;
   
    for(int i=1;i<=n;i++)
    {
         int c=i;
        for (int j=1;j<=i;j++)
        {
            cout<<c;
            c++;
        }
        cout<<endl;
    }

    cout<<"Pattern 8 same as 7";
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j+i-1;
        }
        cout<<endl;

    }
    cout<<"Pattern 9";
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        int c=i;
        for(int j=c;j>=1;j--)
        {
            cout<<j;
        }c++;
        cout<<endl;
    }
    cout<<"Pattern 10";
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            char ch='A' +i-1;
           cout<<ch;
        }
        cout<<endl;
    }
    cout<<"Pattern 11";
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            char ch= 'A' +j-1;
            cout<<ch;
        }
        cout<<endl;
    }
    cout<<"Pattern 12";
    cout<<endl;
    char c='A';
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<c;
            c++;
        }
        cout<<endl;
    }
    cout<<"Pattern 13";
    cout<<endl;
    char ch='A';
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            ch='A'+i+j-2;
            cout<<ch;
        }
        cout<<endl;
    }
    cout<<"Pattern 14";
    cout<<endl;
    ch='A';
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            ch='A'+i-1;
            cout<<ch;
        }
        cout<<endl;
    }
    cout<<"Pattern 15";
    cout<<endl;
    ch='A';
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            ch='A'+i+j-2;
            cout<<ch;
        }
        cout<<endl;
    }
    cout<<"Pattern 16";
    cout<<endl;
    ch='D';
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            ch='D'-i+j;
            cout<<ch;
        }
        cout<<endl;
    }
    cout<<"Pattern 17";
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=n-i;j>=0;j--)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<"Pattern 18";
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
       for(int j=1;j<=n-i+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<"Pattern 19";
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=i-1;k++)
        {
            cout<<" ";
        }
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<"Pattern 20";
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int space=1;space<=i-1;space++)
        {
            cout<<" ";
        }
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }

        
    
    cout<<"Pattern 21";
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int space=1;space<=n-i;space++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
    
    cout<<"Pattern 22";
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int sp=1;sp<=i-1;sp++)
        {
            cout<<" ";
        }
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<i+j-1;
        }
        cout<<endl;
    }

    cout<<"Pattern 23";
    cout<<endl;
    count=1;
    for(int i=1;i<=n;i++)
    {
        for(int sp=1;sp<=n-i;sp++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<count;
            count++;
        }
        cout<<endl;
    }
    cout<<"Pattern 24";
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int sp=1;sp<n-i+1;sp++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)\
        {
            cout<<j;
        }
        for(int m=i-1 ;m>0;m--)
        {
            cout<<m;
        }
        cout<<endl;
    }
    cout<<"HOMEWORK PATTERN";
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<j;
        }
        for(int st=1;st<=i-1;st++)
        {
            cout<<"**";
        }
        for(int m=n-i+1;m>=1;m--)
        {
            cout<<m;
        }
        cout<<endl;
    }






}
    return 0;
}
