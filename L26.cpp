// #include<bits/stdc++.h>
// using namespace std;

// void print(int arr[],int n)
// {
//     for (int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// void print_vector(vector<int> &arr,int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }


// bool isprime(int n)
// {
//     if(n<=1) return false;
//     for(int i=2;i<n;i++)
//     {
//         if(n%i==0) return false;
//     }
//     return true;
// }

// int countprime(int n)
// {
//     int count=0;
//     for(int i=2;i<=n;i++)
//     {
//         if(isprime(i))count++; 
//     }
//     return count;
// }


//  int SIEVE_OF_ERATOSTHERES(int n) {
//     int count=0;
//     vector<bool> prime(n+1,true);
//     prime[0]=prime[1]=false;

//     for(int i=2;i<n;i++)
//     {
//         if(prime[i]) 
//         {
//             count++;
//             for(int j=2*i;j<n;j+=i)
//             {
//                 prime[j]=0;
//             }
//         }
//     }
//     return count;
// }
// int Euclids_Algorithm(int a, int b)
// {
//     if(a==0) return b;
//     if(b==0) return a;
//     while(a!=b)
//     {
//         if(a>b) a-=b;
//         else b-=a;
//     }
//     return a;
// }

// int main()
// {
//     cout<<"Check a number is prime or not (OLD METHOD)"<<endl;
//     int n=20;
//     // cin>>n;
//     if(isprime(n)) cout<<n<<" is a prime number";
//     else cout<<n<<" is not a prime number";

//     cout<<endl<<"Now we will see how many prime numbers exits before n that is "<<n<<endl;
//     cout<<"No of prime number before "<<n<<" is "<<countprime(n)<<endl;

//     cout<<"\nNow we will de ~~SIEVE OF ERATOSTHERES:: "<<endl; // In this algorithm, we assume a number defaults as a prime number, but we will consider a numer contained in its table to be non-prime.
//     cout<<"No of prime number before "<<n<<" is using ~~SIEVE_OF_ERATOSTHERES~~ "<<SIEVE_OF_ERATOSTHERES(n)<<endl;


//     cout<<endl<<"Now we find highest common factor using Euclid's Algorithm "<<n<<endl; //HCF(A,B) = HCF (A-B,B)  or we can say that HCF(A%B,B)
//     int a=72,b=24;
//     // cout<<"Enter the values a and b "<<endl;
//     // cin>>a>>b;
//     cout<<"HCF of "<<a<<" and "<<b<<" is "<<Euclids_Algorithm(a,b)<<endl;

//     cout<<endl<<" No we will do ~~FAST_EXPONENTIATION~~"<<endl ;





// cout<<endl<<endl<<"Everything Is Fine\n=== Code Execution Successful ==="<<endl<<endl;
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int count_prime(int num)
{
    vector<bool> Prime(num+1,true);
    int count=0;
    Prime[0]=Prime[1]=false;

    for(int i=2;i<=num;i++) {
    if(Prime[i]){ 
        cout<<"Prime No is \t"<<i<<"\t\t\t";
        count ++;
        for(int j=2*i;j<=num;j+=i) 
        {
            Prime[j]=false;
        }}}
return count;}
// void print(int arr[],int n,int start=0)
// {
//     for (int i=start;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// void print_vector(vector<int> &arr,int n,int start=0)
// {
//     for(int i=start;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// bool isPrime(int num);
// int count_prime(int num){
//     int count=0;
//     for(int i=2;i<=num;i++) if(isPrime(i)) count++;
//     return count;
// }


// bool isPrime(int num)
// {
//     if(num<=1) return 1;
//     for(int i=2;i*i<=num;i++)
//     {
//         if(num%i==0) return 0;
//     }
//     return 1;
// }
int main()
{
    int n;
    cout<<"Enter the number you want to check for counting prime numbers :: ";
    cin>>n;
    cout<<"prime number from 1 to "<<n<<" is :: "<<count_prime(n)<<endl;
    
    
cout<<endl<<endl<<"Everything Is Fine\n=== Code Execution Successful ==="<<endl<<endl;
    return 0;
}
