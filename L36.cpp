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
bool issorted (int arr [], int size)
{
    if (size==0||size==1) return 1;
    if (arr[0]>arr[1]) return 0;
    return issorted(++arr,--size);
}
int sumarray(int arr[],int n,int sum=0)
{
    // int count=0;
    if (n==0) return sum;
    // sum+=arr[count++];
    return sum+=arr[0]+sumarray(++arr,--n,sum);

}
int getSum(int *arr,int size){
//base case
if (size==0) {
return 0;}
if(size==1) return arr[0];
int remainingPart = getSum(arr+1, size-1);
int sum = arr[0] + remainingPart;
return sum;}

int linearsrch(int arr[], int size, int target, int pos = 0) {
    // print(arr,size);
    if (size == 0) return -1; // not found
    if (target == arr[0]) return pos;
    return linearsrch(arr + 1, size - 1, target, pos + 1);
}
bool binarysearch(int arr[], int start, int end, int key) {
    if (start > end) return false; // base case: not found

    int mid = start + (end - start) / 2;

    if (key > arr[mid]) return binarysearch(arr, ++mid, end, key);
    else if (key < arr[mid]) return binarysearch(arr, start,--mid, key);
    else return true; // found!
}
int findpivotelement(int arr[], int start, int end) {
    if (start >= end) return arr[start];
    int mid = start + (end - start) / 2;
    if (arr[mid] > arr[end]) return findpivotelement(arr, ++mid, end);
    else if (arr[mid] < arr[end]) return findpivotelement(arr, start, --mid);
    else return arr[mid];
}
int searchInRotatedArray(int arr[], int key, int start, int end) {
    // Base case
    if (start > end) return -1;

    int pivot = findpivotelement(arr, start, end);

    if (key < arr[end]) {
        return searchInRotatedArray(arr, key, pivot + 1, end);
    }

    else if (key > arr[end]) {
        return searchInRotatedArray(arr, key, start, pivot - 1);
    }
    else {
        return end;
    }
}
int main()
{
    int arr1[10]={0,1,2,3,4,5,6,7,8,9};
    cout<<"Check array is sorted or not \n";
    print(arr1,10);
    cout<<"Array is sorted: "<<issorted(arr1,10)<<endl;

    cout<<"Sum of array is :: "<<sumarray(arr1,10)<<endl;
    cout<<"Sum of array is :: "<<getSum(arr1,10)<<endl;

    cout<<"Linear search 9 in array anser should be 9 :: "<<linearsrch(arr1,10,4)<<endl;

    cout<<"Binary search 9 in array anser should be 1(that is yess) :: "<<binarysearch(arr1,0,9,9)<<endl;

    int arr2[6]={5,6,7,1,2,3};
    cout<<"finding pivot element jiska answer 1 ana chahiye :: "<<findpivotelement(arr2,0,5)<<endl;
    
    cout<<"Binary search 2 in rotated array anser should be 1(that is yess) :: "<<searchInRotatedArray(arr2,0,5,2)<<endl;
cout<<endl<<endl<<"Everything Is Fine\n=== Code Execution Successful ==="<<endl<<endl;
    return 0;
}
