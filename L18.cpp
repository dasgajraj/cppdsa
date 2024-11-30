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
void bubble_sort(vector<int>&arr, int n)
{
for(int i=1;i<n;i++)
{
    bool swapped=false;
    for(int j=0;j<n-i;j++)
    {
        if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
        swapped=true;}
    }
    if(swapped==false) break;
}
}
void selction_sort(vector<int>&arr, int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        swap(arr[min],arr[i]);
    }
}



int main()
{
    vector<int> arr1={7,5,1,0,2,4,9,6,2,0,3,4};
    print_vector(arr1,arr1.size());
    bubble_sort(arr1,arr1.size());
    // selction_sort(arr1,arr1.size());
    print_vector(arr1,arr1.size());
    
cout<<endl<<endl<<"Everything Is Fine"<<endl<<endl;
    return 0;
}
