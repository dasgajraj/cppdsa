#include<bits/stdc++.h>
using namespace std;


void sort012(int arr[],int n)
{
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high)
    {
        switch (arr[mid])
        {
            case 0:
                swap(arr[low], arr[mid]);
                low++;mid++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[mid], arr[high--]);
                break;
        }
    }
}




void sort01(int arr[],int n)
{
    int start=0,last=n-1;
    while(start<=last)
    {
        if(arr[start]==0)
        {
            start++;
        }
        else if(arr[last]==1)
        {
            last--;
        }
        else
        {
            swap(arr[start],arr[last]);
            start++;
            last--;
        }
    }
}


int pair1(int arr[],int n,int key)
{
    int count=1;
    for(int i=0;i<n;i+=1)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==key)
            {
                cout<<"pair "<<count<<" is "<<arr[i]<<" + "<<arr[j]<<" = "<<key<<endl;
                count++;
                break;
            }
        }
    }
    return 0;
}
int triplet(int arr[],int n,int key)
{
    int count=1;
    for(int i=0;i<n;i+=1)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]+arr[k]==key)
                {
                    cout<<"pair "<<count<<" is "<<arr[i]<<" + "<<arr[j]<<" + "<<arr[k]<<" = "<<key<<endl;
                    count++;
                    break;
                }
            }
        }
    }
    return 0;
}

void intersection(int arr1[],int arr2[],int n,int m)
{
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr1[i]==arr2[j])
            {
                cout<<arr1[i]<<" ";
            }
        }
    }
}

int all_dupli(int arr[], int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
        {
            ans=ans^arr[i];
        }
    return ans;
}

int dupli(int arr[])
{
    int dupli=0;
    for(int i=0;i<5;i++)
    { 
       dupli=dupli^arr[i];       
    }
    for(int i=0;i<5;i++)
    {
        dupli=dupli^i;
    }
    return dupli;
}

int unique(int arr[])
{
    int uni=0;
    for(int i=0;i<5;i++)
    { 
       uni=uni^arr[i];
    }
    return uni;
}

void alter(int arr[])
{
    for (int i=0;i<6;i+=2)
    {
        swap(arr[i],arr[i+1]);
    }
}

void print(int arr[],int n)
{
    cout<<"Printing ARRAY"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void input(int arr[])
{
    cout<<"Input ARRAY"<<endl;
    for (int i=0;i<6;i++)
    {
        cin>>arr[i];
    }
}
int main()
{
    int arr1[6]={1,2,3,4,5,6};  
    // input(arr1);
    cout<<"Q1 To alternate swaping in array \n";
    cout<<"print before alternating"<<endl;
    print(arr1,6);
    alter(arr1);
    cout<<"print after alternating"<<endl;
    print(arr1,6);
    cout<<endl<<endl;

    cout<<"Q2 To find unique in array \n";
    int arr2[5]={1,3,4,1,3};
    cout<<"Before Unique \n\n";
    print(arr2,5);
    cout<<"unique term in array is "<<unique(arr2)<<endl;
    print(arr2,5 );
    
    cout<<"\n\nQ3 To find dupli in array \n";
    int arr3[5]={1,2,2,3,4};
    print(arr3,5);
    cout<<"duplicate term in array is "<<dupli(arr3)<<endl;
    print(arr3,5);

    cout<<"\n\n Home work Q To find all dupli in array \n";
    int arr_h[6]={1,1,2,3,4,5};
    print(arr_h,6);
    cout<<"duplicate terms in array are "<<all_dupli(arr_h,6)<<endl;
    print(arr_h,6);

    cout<<"\n\n Q To find all intersection in array \n";
    int arr_inter1[6]={1,2,6,3,4,5};
    int arr_inter2[6]={6,2,3,7,8,5};
    print(arr_inter1,6);
    print(arr_inter2,6);
    cout<<"intersection terms in array are "<<endl;
    intersection(arr_inter1,arr_inter2,6,6);

    cout<<"\n\n Q To find pair sum in array \n";
    int arr_pair[6]={0,1,2,3,4,5};
    print(arr_pair,6);
    int sum=5;
    // cout<<"give the value if sum you want to find";
    // cin>>sum;
    cout<<"pair sums in array are "<<endl;
    pair1(arr_pair,5,sum);
    
 
    cout<<"\n\n Q To find Triplet  sum in array \n";
    int arr_trip[11]={0,1,2,3,4,5,6,7,8,9,10};
    print(arr_trip,11);
    int key=12;
    // cout<<"give the value if sum you want to find";
    // cin>>key;
    cout<<"Triplet sums in array are "<<endl;
    triplet(arr_trip,11,key);
    
 
    cout<<"\n\n Q To sort 0s & 1s in array \n";
    int arr_sort[18]={0,1,1,0,1,0,1,0,0,0,1,1,1,1,1,0,0,0};
    cout<<"printing before sorting"<<endl;
    print(arr_sort,18);
    sort01(arr_sort,18);
    cout<<"printing after sorting"<<endl;
    print(arr_sort,18);


    cout<<"\n\n Q to sort array containing 0s,1s,2s\n\n";
    int arr_sort012[12]={0,1,2,2,1,2,1,0,1,2,0,1};
    cout<<"printing before sorting"<<endl;
    print(arr_sort012,12);
    sort012(arr_sort012,12);    
    cout<<"printing after sorting"<<endl;
    print(arr_sort012,12);



    cout<<"\n\n Everything Is Fine"<<endl<<endl;
    return 0;
}
