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
void selection_sort(vector<int>& arr,int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i;j<n;j++)
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
    cout<<"Now we wil do Selection Sort\n";
    vector<int> arr1={1,7,9,2,3,0};
    print_vector(arr1,6);
    selection_sort(arr1,6);
    print_vector(arr1,6);
    cout<<"Home work questions :::\n";
    
    
cout<<endl<<endl<<"Everything Is Fine"<<endl<<endl;
    return 0;
}
