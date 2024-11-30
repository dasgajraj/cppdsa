#include<bits/stdc++.h>
using namespace std;

int main()
{
int t=1;

while(t--)
{
        // Prompt the user to enter two integers
    std::cout << "Enter two integers: ";
    int a=4 , b=6;
    

    // Perform bitwise operations on the integers
    cout << "BITWISE OPERATORS:\n";
    cout << (a & b ) << "\t AND OPERATOR \n";
    cout <<( a | b) << "\t OR OPERATOR \n";
    cout << (~a  ) <<"\t NOT OPERATOR \n";
    cout << (a ^ b ) << "\t XOR OPERATOR \n";

    cout<<"BIT WISE LEFT/ RIGHT SHIFT \n";
    cout<<(a<<1)<<"\t 8"<<endl;
    cout<<(a>>1)<<"\t 2"<<endl;
    cout<<(b<<2)<<"\t 24"<<endl;
    cout<<(b>>2)<<"\t 1"<<endl;


    cout<<"POST AND PRE DECREMENT/INCRRMENT\n";
    int i=1;
    cout<<i++<<"\t Post increment"<<endl;
    cout<<i<<endl;
    cout<<++i<<"\t Pre increment"<<endl;
    cout<<i<<endl;

    cout<<"SUM 1 to N\n";
    int n;
    cout<<"give value of n\n";
 n=50;
    int sum=0;
    for(int i=0;i<=n;i++){
        sum+=i;
    }
    cout<<sum<<endl;
n=10;
    cout<<"\nFIBBONACCI SERIES\n";
    int n1=0,n2=1,n3;
    cout<<n1<<" "<<n2<<" ";
        for(int i=3;i<=n;i++)
        {
            n3=n1+n2;
            cout<<n3<<" ";
            n1=n2;
            n2=n3;

        }

    
    cout<<"CHECK PRIME OR NOT \n";
    int prime=1;
    n=7;
    for(int i=2;i<=n-1;i++){
        if(n%i==0)
        {
            cout<<n <<"  is not prime no;";
            
            prime=0;
            break;
        }
        
    }
    if(prime==1)
    {
        cout<<n<<" is prime no";
    }

    cout<<"\n\n LEET CODE QUESTION no.1\n\n";
int num,npro=1,nsum=0;
num=4421;
cout<<" number is"<<num<<endl;
while(num>0)
{
    nsum+=num%10;
    npro*=num%10;
    num/=10;
    
}
 cout<<nsum<<"is sum and product will be"<<npro<<endl;
 cout<<"difference b/w them is  "<<(npro-nsum);

    cout<<"\n\n LEET CODE QUESTION no.2\n\n";


}
    return 0;

}