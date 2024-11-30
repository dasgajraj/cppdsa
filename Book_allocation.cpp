#include<bits/stdc++.h>
using namespace std;
bool IsPossible(int arr[],int n,int stu,int mid){
int student=1;
int page_count=0;
for(int i=0;i<n;i++){
    if(page_count+arr[i] <= mid)
    {
        // student++;
        page_count+=arr[i];
        }
    else
    {
        student++;
        if(student>stu || arr[i]>mid)
        {
            return false;
        }
    page_count=arr[i];}
}
return true;
}
int maxii(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int BAP(int arr[],int n,int stu){
    int ans=-1;
    int min=0, max=maxii(arr,n),mid=min+(max-min)/2;
    while(min<=max)
    {
        if(IsPossible(arr,n,stu,mid))
        {
            ans=mid;
            max=mid-1;
        }
        else
        {
            min=mid+1;
        }
        mid=min+(max-min)/2;
    }
    return ans;
}

void input(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {cin>>arr[i];}
}

int main()
{
    // int t =3;
    // while(t--){
    cout<<"\nBOOK ALLOCATION PIROBLUM\n\n";
    cout<<"give no of elemt in array";
    int n;
    cin>>n;
    int book[n],stu;
    input(book,n);
    // print(book,n);
    cout<<"Give no of students you want:: ";  
    cin>>stu;
    cout<<"The solution of this pirro blumm is::"<<BAP(book,n,stu)<<endl;
    // }
cout<<endl<<endl<<"Everything Is Fine"<<endl<<endl;
    return 0;
}
