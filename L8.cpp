// #include<bits/stdc++.h>
// using namespace std;
// bool even(int n)
// {
//     if(n%2==0){
//         return 1;
//     }
//     return 0;
// }

// int main()
// {
// // {
// // int t=1;

// // while(1)
// // {
// //     cout<<"Now we will do switch case"<<endl;
// //     int a =1;
// //     switch (a)
// //     {
// //         case 1:
// //         cout<<"You have entered 1"<<endl;
// //         cout<<"You have entered something else"<<endl;
// //         exit(0);
// //         // exit(0);
// //         // break;
         
// //         case 2:
// //         cout<<"You have entered 2"<<endl;
// //         break;

// //         case 3:
// //         cout<<"You have entered 3"<<endl;
// //         break;

// //         default:
// //         // break;
// //     }
// // }
//     int a,num,notes,count=0;
//     cout<<"Enter the amount you want to take"<<endl;
//     cin>>num;
//     int x=num;
//     cout<<endl<<"what should be maximum note";
//     cin>>notes;
//     switch (notes)
//     {
//         case 1000:
//         a=num/1000;
//         num-=a*1000;
//         cout<<"1000 notes are : "<<a<<endl;
//         count+=a;

//         case 500:
//         a=num/500;
//         num-=a*500;
//         cout<<"500 notes are :"<<a<<endl;
//         count+=a;
        
//         case 200:
//         a=num/200;
//         num-=a*200;
//         cout<<"200 notes are :"<<a<<endl;
//         count+=a;
        
//         case 100:
//         a=num/100;
//         num-=a*100;
//         cout<<"100 notes are :"<<a<<endl; 
//         count+=a;
        
//         case 50:
//         a=num/50;
//         num-=a*50;
//         cout<<"50 notes are :"<<a<<endl;
//         count+=a;
        
//         case 20:
//         a=num/20;
//         num-=a*20;
//         cout<<"20 notes are :"<<a<<endl;
//         count+=a;
        
//         case 10:
//         a=num/10;
//         num-=a*10;
//         cout<<"10 notes are :"<<a<<endl;
//         count+=a;
        
//         case 1:
//         a=num/1;
//         num-=a*1;
//         cout<<"1 notes are :"<<a<<endl;
//         count+=a;
        
//     }
//     cout<<"Total no of notes are "<<count<<"  and total amount is "<<x<<endl;

// int nom;
// cout<<"check even odd for give no.";
// cin>>nom;
// int b=even(nom);
// if(b==1){
//     cout<<"even";
// }
// else cout<<"odd";

//     return 0;
// }
  

  #include<bits/stdc++.h>
  using namespace std;
    int fact(int n){
        int fact=1;
        for ( int i=1;i<=n;i++)
        {
            fact*=i;
        }
        return fact;
    }
    int nCr(int n, int r)
    { 
        int nCr= (fact(n))/(fact(r)*fact(n-r));
        return nCr;
    }
  int main()
  {
  int t=1;
  
  while(t--)
  {
    int n,r;
    cout<<"give the value want to calcualte for nCr";
    cin>>n>>r;

    cout<<"nCr of a given number is"<<nCr(n,r)<<endl;
    
  }
    return 0;
  }
  