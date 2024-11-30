#include<bits/stdc++.h>
using namespace std;
int maxii(int arr[],int n)
{
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            swap(arr[i],max);
    }
    }
return max;
}
void sort(int arr[],int n)
{

}
bool AC_poss(int arr[],int n,int stu,int mid)
{
    int cow=1;
    return true;

}
int Cow_Allocation(int arr[],int stu,int n){
    int ans=-1,min=0,max=maxii(arr,n),mid=min+(max-min)/2;
    while(min<=max)
    {
        if(AC_poss(arr,n,stu,mid))
        {
            min=mid+1;
        }
        else{
            max=mid-1;
        }
        mid=(min+max)/2;
    }
    return ans;
}
// int arrsum(int arr[], int n);
int arrsum(int arr[], int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;
} 
int PP_Possible(int arr[],int n,int stu,int mid)
{
    int painter=1,Psum=0;
    for(int i=0;i<n;i++)
    {
        if(Psum+arr[i]<=mid){Psum+=arr[i];}
        else{
            painter++;
            if(painter>stu || arr[i]>mid)
            {return false;}
            Psum=arr[i];
        }
    }
    return true;
}
int Painters_Allocation(int PP[],int stu,int n)
{
    int ans=-1,min=0,max=arrsum(PP,n),mid=min+(max-min)/2;

    while(min<=max)
    {
        if(PP_Possible(PP,n,stu,mid)){
            ans=mid;
            max=mid-1;
        }
        else{
            min=mid+1;

        }
        mid=min+(max-min)/2;
    }
    return ans;
}

bool isPossible(int arr[],int n,int stu,int mid)
{
    int stu_count=1;
    int page_sum=0;
    for(int i=0;i<n;i++)
    {
        if(page_sum + arr[i]<= mid ){
            page_sum+=arr[i];
        }
        else{
            stu_count++;
            if(stu_count > stu || arr[i] > mid){
                return false;
            }
            page_sum=arr[i];
        }
    }
    return true;
}

int Book_Allocation(int arr[], int stu, int n)
{
    cout<<"\n\n Book Allocation Problem Solution is \n";
    int ans = -1;
    int min=0,max=arrsum(arr,n),mid=min+(max-min)/2;
    // cout<<"max is "<<max;
    while(min<=max)
    {
        if(isPossible(arr,n,stu,mid)){
            ans=mid;
            max=mid-1;
        }
        else{
            min=mid+1;
        }
        mid=min+(max-min)/2;
    }
    
   return ans;
}

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}                 
int main()
{
    cout<<"\nNow we will do Book allocation problem"<<endl;
    int BP[4]={10,20,30,40}; //answer shuld be 60
    print(BP,4);
    // cout<<"Now give no of students present\n";
    int stu=2; //student is 2
    // cin>>stu;
    cout<<"Book allocation is:: "<<Book_Allocation(BP,stu,4)<<endl<<endl;

    cout<<"NOw we wil do painters partition problem";
    int PP[4]={10,10,10,10};
    stu=2;
    cout<<"\nPainters allocation is:: "<<Painters_Allocation(PP,stu,4)<<endl;
    cout<<"NOw we wil do Aggresive Cows problem";
    int AC[5]={4,2,1,3,6};
    stu=2;
    cout<<"\nAggresive Cows  is:: "<<Cow_Allocation(AC,stu,5)<<endl;
cout<<endl<<endl<<"Everything Is Fine"<<endl<<endl;
}
