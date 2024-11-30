#include<bits/stdc++.h>
using namespace std;
//DECIMAL TO BINARY CONVERSION
int binary(int n)
{   int i=1;
    int bin=0;
    while(n!=0)
    {
        bin+=(n%2)*i;
        n/=2;
        i*=10;
        
    }
    // cout<<bin;
    return bin;
}
//DECIMAL TO OCTAL CONVERSION
int octal(int n)
{
    int oct=0,i=1;
    while(n>0)
    {
        oct+=(n%8)*i;
        i*=10;
        n/=8;
    }
        // cout<<oct;
        return oct;
}
int main()
{
int t=1;

while(t--)
{
    int decimal;
    cin>>decimal;

    cout<<"\n\nconvert to binary  "<<decimal<<"  is: "<<endl;
    cout<<binary(decimal)<<endl;
    
    cout<<"\n\nconvert to octal  "<<decimal<<"  is: "<<endl;
    int octaa=octal(decimal);
    cout<<octaa<<endl;

    //BINARY TO DECIMAL CONVERSION
    int n;
    cin>>n;
    int i=0,ans=0;
    {
        while(n!=0)
        {
            int dig=n%10;
            if(dig==1)
            {
                ans+=pow(2,i);
            }
            n/=10;
            i++;
        }
        cout<<endl<<"decima no of gven binary will be  :"<<ans<<endl;

        //OCTAL TO DECIMAL CONVERSION

        cout<<endl<<"give value for octal :::";
        int oct;
        cin>>oct;
int oct2deci=0,i=0;
        while(oct!=0)
        {
            int digit=(oct%10);
            if(digit==1)
            {
                oct2deci+=pow(2,i);
            }
            i++;
            oct/=10;
        }
        cout<<"octal to decimal iss "<<oct2deci;

    }
}
/*OUTPUT IS  OF COMPLETE CODE WAS

10
convert to binary
1010
convert to octal
12
1010
decima no of gven
10
10
is:
is:
binary will be
: 10

*/

    return 0;
}
