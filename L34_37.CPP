#include<bits/stdc++.h>
using namespace std;

void print(string arr,int n,int start=0)
{
    for (int i=start;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void printarr(int arr[],int n,int start=0)
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

void reverse_using_recursion(string & arr,int n,int i=0)
{
    if(i>n/2) return;
    swap(arr[i],arr[n-i-1]);
    reverse_using_recursion(arr,n,++i);
}
bool chec_pallindrome(string & arr, int n,int i=0)
{
    if(i>=n/2) return true;
    if(arr[i]!=arr[n-i-1]) return false;
    return chec_pallindrome(arr,n,++i);
}
int powerof(int a,int b)
{

    if(b==0) return 1;
    if(b==1) return a;
    int ans=powerof(a,b/2);

    if(b%2==0) return ans*ans;
    else return a*ans*ans;

}
void bubble_sort( int* arr,int n)
{
    // printarr(arr,11);
    if(n==0 || n==1) return;


    for(int i=0;i<n;i++)
    {
    if(arr[i]>arr[i+1]) swap(arr[i],arr[i+1]);
    }
    return bubble_sort(arr,--n);
}
void selection_sort( int *arr,int n)
{
    if(n==0 || n==1) return;
    int min=0;
    for(int i=0;i<n;i++)
    {
        if(arr[min]>arr[i])
        min=i;
    }
    swap(arr[min],arr[0]);
        return selection_sort(++arr,--n);

}
void insertion_sort( int* arr,int n)
{
    // printarr(arr,11);
    if(n==0 || n==1) return;
    // printarr(arr,5);
    int j=0;
    for(int i=j+1;i<n;i++)
    {
    if(arr[j]>arr[i]) swap(arr[j],arr[i]);
    j++;
    // if(arr[i]>arr[i+1]) 
    }
    return insertion_sort(arr,--n);
}

int main()
{
    string str="QWERTY";
    cout<<"Reversing the string \n";
    print(str,6);    
    reverse_using_recursion(str,6);
    print(str,6);
    string str2="saddas";
    cout<<"Checkimg a string is pallindrome or not :: "<<chec_pallindrome(str2,str.length());
    cout<<"\n\n now we will find 2 raised to per 10 :: "<<powerof(2,10)<<endl;

    int arr[11]={2,3,5,7,3,1,2,43,6,9,0};
    printarr(arr,11);
    cout<<"Now we will do bubblesort with recursion \n";
    bubble_sort(arr,11);
    printarr(arr,11);
    cout<<endl;


    cout<<"Now we will do selection sort with recursion \n";
    int arr2[11]={2,3,5,7,3,1,2,43,6,9,0};
    printarr(arr2,11);
    selection_sort(arr2,11);
    printarr(arr2,11);

    cout<<"Now we will do insertion_sort with recursion \n";
    int arr3[5]={5,2,3,1,0};
    printarr(arr3,5);
    insertion_sort(arr3,5);
    printarr(arr3,5);


cout<<endl<<endl<<"Everything Is Fine\n=== Code Execution Successful ==="<<endl<<endl;
    return 0;
}
