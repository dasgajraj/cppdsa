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
void update(int **p) {
    // p+=1;
    // //which one will work
    *p+=1;
    // //which one will work
    // **p+=1;
    // //which one will work
}


int main()
{
    // cout<<"Now we will study about double pointers\n";
    // cout<<"declaring a variable\n";
    // int i=5;
    // cout<<"Declaring a pointer \n";
    // int* ptr=&i;
    // cout<<"accessing a pointer \n";
    // cout<<ptr<<endl;
    // cout<<"accessing a value at pointer \n";
    // cout<<*ptr<<endl;
    // cout<<"accessing a variable \n";
    // cout<<i<<endl;

    // cout<<"Declaring a double pinter \n";
    // int** ptr2=&ptr;
    // // cout<<"Declaring a double pointer \n";
    // // int* ptr=&i;
    // cout<<"accessing a  double pointer \n";
    // cout<<ptr2<<endl;
    // cout<<"accessing a value at double pointer \n";
    // cout<<*ptr2<<endl;
    // cout<<"accessing a value at doble pointers address value variable \n";
    // cout<<**ptr2<<endl;

    int i=5;
    int*p =&i;
    int **p2=&p;
    cout<<endl<<endl;
    cout<< "before :: :: "<<i<<endl;
    cout<<"before :: :: "<<p<<endl;
    cout<< "before :: :: "<<p2<<endl;
update (p2) ;
    cout<< "after :: :: "<<i<<endl;
    cout<< "after :: :: "<<p<<endl;
    cout<<"after :: :: "<<p2<<endl;
    cout<<endl<<endl;




cout<<endl<<endl<<"Everything Is Fine\n=== Code Execution Successful ==="<<endl<<endl;
    return 0;
}
