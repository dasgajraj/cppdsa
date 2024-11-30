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
void print2d(int n,int arr[][3])
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<3;j++)
        {
        cout<<arr[i][j]<<" ";
        }

    cout<<endl;
    }
}
void print_vector(vector<int> &arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool found(int arr[][3],int row,int col,int target)
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(target==arr[i][j]) return 1;
        }
    }
    return 0;
}
void arrsum( int arr[][3])
{
    for(int i=0;i<3;i++)
    {int sum=0;for( int j=0;j<3;j++){
        sum+=arr[i][j];
    }
    cout<<"sum of "<<i+1<<"th row is::"<<sum<<endl;}
}
void largestarrsum(int arr[][3])
{
    int largest=0,index;
    for(int i=0;i<3;i++)
    {
        int currentsum=0;
            for( int j=0;j<3;j++)
            {
                currentsum+=arr[i][j];
            }
            if(currentsum>largest) {largest=currentsum; index=i;}
    }
    cout<<"largest sum is::"<<largest<<" and index is::"<<index+1<<endl;

}
void wavepattrn( int arr[][3])
{
    for(int i=0;i<3;i++)
    {
        if(i&1)
        {// index hamarea agar odd hai to
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
            }

        }
        else{ //index hamara even hai to
            for(int j=0;j<3;j++)
            {
                cout<<arr[j][i]<<" ";
            }
        }
        cout<<endl;
    }

}



int main()
{
    cout<<"linear Search in 2d array"<<endl;
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    print2d(3,arr);
    int target=7;
    if( found(arr,3,3,target)){cout<<target<<":: found";}
    else {cout<<target<<":: Not Found";}

    cout<<endl<<endl<<"Now we will do row wise sum::"<<endl;
    arrsum(arr);
    
    cout<<endl<<endl<<"Now we will do largest row wise sum::"<<endl;
    largestarrsum(arr);

    cout<<endl<<endl<<"Now we will wave pattern::"<<endl;
    wavepattrn(arr);
    // print2d(3,arr);


cout<<endl<<endl<<"Everything Is Fine\n=== Code Execution Successful ==="<<endl<<endl;
    return 0;
}
