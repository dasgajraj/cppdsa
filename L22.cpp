// #include<bits/stdc++.h>
// using namespace std;

// void print(int arr[],int n)
// {
//     for (int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// void print_vector(vector<int> &arr,int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// void rotate_normal(vector<int> &arr, int key)
// {
//     vector<int>::iterator itr=arr.begin();
//     int n=(arr.size()-1);
//     key%=n;
//     while(key>0)
//     {
//         int temp=arr[n];
//         arr.pop_back();
//         arr.insert(itr,temp);
//         key--;
//     }    
    
// }
// void rotate_optimised(vector<int> & arr,int k)
// {
//     vector<int> temp(arr.size());
//     // k%=arr.size();
//     for(int i=0;i<arr.size();i++)
//     {
//         temp[(i+k)%arr.size()]=arr[i];
//     }
//     arr=temp;
    
// }


// int main()
// {
// //Input: nums = [1,2,3,4,5,6,7], k = 3
// //Output: [5,6,7,1,2,3,4]
//     vector<int> nums={1,2,3,4,5,6,7};int k=3;
//     cout<<"Now we wil rotate an array";
//     cout<<endl<<"Print Before rotating"<<endl;;
//     print_vector(nums,nums.size());
//     // cout<<endl;
//     rotate_normal(nums,k);
//     print_vector(nums,nums.size());


//     cout<<endl<<"optimised rotating";
//     nums={11,12,13,14,15};k=3;
//     // nums={1,2,3,4,5,6,7};k=3;
//     cout<<endl<<"Print Before rotating"<<endl;
//     print_vector(nums,nums.size());
//     // cout<<endl;
//     rotate_optimised(nums,k);
//     print_vector(nums,nums.size());
// cout<<endl<<endl<<"Everything Is Fine\n=== Code Execution Successful ==="<<endl<<endl;
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
void add2arrays(int arr1[],int m,int arr2[],int n,int arr3[]){

int i=m-1,j=n-1,k=max(m,n);
// (i>=j?(k=i):(k=j));
int carry=0;
while(i>=0 && j>=0)
{
int sum = carry;
        int a=arr1[i],b=arr2[j];
        sum+=a+b+carry;
        carry=sum/10;
        sum%=10;
        arr3[k--]=sum;
        i--;j--;
}
}

void print(int arr[],int n,int start=0)
{
    for (int i=start;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void input(int arr[],int n)
{
    for (int i=0;i<n;i++) cin>>arr[i];}

void rotate_array(int arr[],int n,int k,int arr_ans[])
{
    for (int i = 0; i < n; i++) {
        arr_ans[(i + k) % n] = arr[i];}    
}

bool IS_rotated_array(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n-1;i++) if(arr[i]>arr[i+1]) count++;
    if(arr[n-1]>arr[0]) count++;
    if(count<=1) return true;
    else return false;

}

int main()
{
    // // PROGRAM TO ROTATE AN ARRAY
    // int t=5;
    // while(t--){
    //     int arr[10],arr_final[10]={0},n,k;
    //     cout<<"Enter the value of n ::";
    //     cin>>n;
    //     cout<<"Enter from ehere you want to rotate an array";
    //     cin>>k;
    //     k=k%n;
        
    //     input(arr,n);
    //     rotate_array(arr,n,k,arr_final);
    //     cout<<"Array After Rotation :: \n\n";
    //     print(arr_final,n);
    // }
    
    // // PROGRAM TO CHECK ROTATED ARRAY
    // int t=4;
    //     int arr[10],n;
    //     cout<<"Enter the value of n ::";
    //     cin>>n;
    // while(t--){
    //     input(arr,n);
    //     // print(arr_final,n);
    //     cout<<"IS Array ROTATED :: \t"<<IS_rotated_array(arr,n);
    // }
    
    //PROGRAM TO ADD2 ARRAYS  

    int arr1[10],arr2[10],arr3[10]={0},m,n;
    cout<<"give the value of m:: ";
    cin>>m;
    cout<<"give the value of n:: ";
    cin>>n;
    cout<<"Enter the elements of first array :: \n";
    input(arr1,m);
    cout<<"Enter the elements of second array :: \n";
    input(arr2,n);
    add2arrays(arr1,m,arr2,n,arr3);
    cout<<"Array after addition :: \n";
    int k;
    (m>=n?(k=m):(k=n));

    print(arr3,k);


cout<<endl<<endl<<"Everything Is Fine\n=== Code Execution Successful ==="<<endl<<endl;
    return 0;
}
