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
void insertion_sort(vector<int>&arr,int n)
{
    for(int i=1;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
            while(j>=0 && arr[j]>key)
            {
                arr[j+1]=arr[j];
                j--;
            }
        arr[j+1]=key;
    }
}
void selection_sort(vector <int> &arr, int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        swap(arr[min],arr[i]);
    }
}

void bubble_sort(vector<int>&arr,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
        
int main()
{
    cout<<"Now we will do insertuin sorting::\n";
    vector<int> arr={8,5,7,4,6,9,77,4,5,7,8,41,23,9,89,99,6,0,56,0,0,0,0};
    print_vector(arr,arr.size());
    // insertion_sort(arr,arr.size());
    // selection_sort(arr,arr.size());
    // bubble_sort(arr,arr.size());
    print_vector(arr,arr.size());
    cout<<endl<<endl<<"Everything Is Fine"<<endl<<endl;
    return 0;
}
