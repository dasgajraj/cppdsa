// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// int t=1;

// while(t--)
// {
//     // now we wail study array.
//     // Declaration
//     int arr[5];
//     // Initialization
//     int ar[4]={2,3,4,5};
//     // Accessing
// // Now printing the array
// cout<<"what is value at its 17th terml  "<<ar[15]<<endl;
  
// }
// cout<<"Everything Is Fine"<<endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
void printing(int arr[]){
    int n=0;
    while(n<10){
        // cout<<"value at "<<n<<" index is : ";
        cout<<arr[n]<<" ";    
        n++;
}
}
int linesearch(int arr[],int n){
    for(int i=0;i<10;i++){
        if(arr[i]==n){
            return n;
        }
    }
    return -1;
}

void revarr(int arr[]){
    for (int i=0;i<5;i++){swap(arr[i],arr[10-i]);
    }
}
int main()
{
int t=1;

    // Now we have to find max and min of arrays
    // let us initialise am array
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    // now find max and min;
    // for max
    int maxi=arr[0];
    // for min
    for(int i=0;i<10;i++)
    {
        maxi=max(maxi,arr[i]);
        // if(max<arr[i]){max=arr[i];}
    }
cout<<"Maximum valiue in array iss "<<maxi<<endl;
// Now we will do same for minimum numbers
int mini=arr[0];
for(int i=0;i<10;i++){
        mini=min(mini,arr[i]);
    // if(min>arr[i]){min=arr[i];}
} 
cout<<"Minimum valiue in array iss "<<mini<<endl;


cout<<"HOMEWORK QUESTION "<<endl;
// add an array
int sum=0;
for(int i=0;i<10;i++)
{
    sum+=arr[i];
}
cout<<"sum of an array is "<<sum<<endl;
int search=7;
// Now we will do linear search
int pos=linesearch(arr,search);
if (pos!=-1){cout<<search<<" is present at a position of "<<pos<<" index of an array"<<endl;
}
else cout<<search<<" element is not present in array"<<endl;

//NOw we will reverse an array
cout<<"printing before reversing"<<endl;
printing(arr);    
cout<<"\nNOw we will reverse an array"<<endl;
revarr(arr);
cout<<"printing after reversing"<<endl;
printing(arr);    
cout<<"Everything Is Fine"<<endl;
return 0;
}