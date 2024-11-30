#include<bits/stdc++.h>
using namespace std;

int main()
{
int t=1;
int x=651;
int rev=0,rem,a=x;
              while(x!=0){
            rem=(x%10);
            rev=rev*10+rem;
            x/=10;
        }
        if(rev==a){cout<<"true";}
        else{cout<<"false";} return 0;
         return 0;
}