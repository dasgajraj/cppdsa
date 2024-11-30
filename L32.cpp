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

// 4 1 2 3 4 2 3 4 3 3 4 3 2 4 3 2 1

int main()
{
    int row,col;
    cin>>row>>col;
    int** arr= new int* [row];
    for(int i=0;i<row;i++) arr[i]= new int [col];

    for(int i=0;i<row;i++){for(int j=0;j<col;j++){
        cin>>arr[i][j];
    }}

    for(int i=0;i<row;i++){for(int j=0;j<col;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;}
    
    for(int i=0;i<row;i++){
            delete [] arr[i];
    }
    delete []arr;



cout<<endl<<endl<<"Everything Is Fine\n=== Code Execution Successful ==="<<endl<<endl;
    return 0;
}
