
#include<bits/stdc++.h>
using namespace std;

void print(int arr[],int n,int start=0)
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
int partition(int arr[], int s, int e) {
    int pivot = arr[s];
    int i = s + 1;
    int j = e;
    int cmt = 0;

    for (int k = s + 1; k <= e; k++) {
        if (arr[k] <= pivot) {
            cmt++;
        }
    }

    int pivotIndex = s + cmt;
    swap(arr[pivotIndex], arr[s]);

    i = s;
    j = e;

    while (i < pivotIndex && j > pivotIndex) {
        while (arr[i] <= pivot) i++;
        while (arr[j] > pivot) j--;

        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}
void quicksort(int arr[],int s,int e)
{
    if(s>=e) return;

    int p=partition(arr,s,e);

    quicksort(arr,s,p-1);

    quicksort(arr,p+1,e);
}
int main()
{
    int arr[5] ={ 2,4,1,6,9};
    int n=5;
    quicksort(arr,0,n-1);
    print(arr,n);
    
cout<<endl<<endl<<"Everything Is Fine\n=== Code Execution Successful ==="<<endl<<endl;
    return 0;
}