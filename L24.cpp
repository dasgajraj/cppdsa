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
int getLength(char arr[])
{
    int count=0;
    for(int i=0;arr[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
void reverse(char arr[],int n)
{

    for(int i=0;i<n/2;i++)
    {
        swap(arr[i],arr[n-i-1]);
    }
    // return count;
}
void  reverse_string(char str[], int start, int end) {
    while (start < end) {
        swap(str[start], str[end]);
        start++;
        end--;
    }
}
bool pallindrome(string arr,int n)
{
    string a;
    a=arr;
    reverse(a.begin(),a.end());
    if(a==arr) return 1;
    else return 0;
}



int main()
{
    char a='g';
    cout<<a<<endl;
    string s="HELLO";
    cout<<s<<endl;
    char b[]="DasGajrajSharma";
    cout<<b<<endl;
    cout<<"now take input of character array\n";
    char c[20]={'C','A','R','A','C'};
    // cin>>c;
    // gets(c);
    // c[3]='\0'; 
    c[6]='\0'; 
    // c[10]='\0'; 
    puts(c);
    // cout<<c<<endl;
    cout<<"size of this array is::"<<sizeof(c)<<endl;
    // cout<<"length of this array by function is::"<<getLength(c)<<endl;
    cout<<"length of this array by predefined Fn is::"<<strlen(c)<<endl;
    // int length=strlen(c);

    cout<<"\n\nnow we will reverse a string::"<<endl;
    reverse(c,strlen(c));
    cout<<"Print After reversing a string \n";
    puts(c);

    cout<<"\n\nnow we will check a pallindrome string::"<<endl;
    puts(c);
    if(pallindrome(c,strlen(c))){
    cout<<"it is Pallindrome \n";
    }
    else{cout<<"No pallindrome \n";}

 cout << "\n\nnow we will check a valid pallindrome string::" << endl;
    char q1[100];
    cin.getline(q1, 100);
    int start = 0, end = 0;
    while (q1[end] != '\0') {
        if (q1[end] == ' ') {
            reverse_string(q1, start, end - 1);
            start = end + 1;
        }
        end++;
    }
    reverse_string(q1, start, end - 1);
    reverse_string(q1, 0, end - 1);
    
    




    
    
cout<<endl<<endl<<"Everything Is Fine\n=== Code Execution Successful ==="<<endl<<endl;
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// void print(char arr[],int n,int start=0)
// {
//     for (int i=start;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// void print_vector(vector<int> &arr,int n,int start=0)
// {
//     for(int i=start;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int arr_len( char arr[])
// {
//     int count=0;
//     for( int i=0;arr[i]!='\0';i++) count ++;
//     return count;
// }
// void reverse( char arr[],int n)
// {
//     int i=0,j=n-1;
//     while(i<=j){
//         swap(arr[i++],arr[j--]);
//     }
// }
// bool pallindrome(char arr[], int n)
// {
//     char arr2[n];
//     for(int i=0;i<n;i++) arr2[i]=arr[i];
//     reverse(arr,n);


//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]!=arr2[i]) return false;
//     }
//     return true;
// }


// int main()
// {
//     char arr[10];
//     int n;
//     cout<<"Enter the size of the array: ";
//     cin>>n;
//     cin>>arr;
//     cout<<"The length of char array is "<<arr_len(arr)<<endl;
//     cout<<"\n\n Now we will reerse a string:: \n\n";
//     reverse(arr,arr_len(arr));
//     cout<<"array after reversing\n";
//     print(arr,arr_len(arr));
    
//     cout<<"\n\n Now we will check pallindrome string:: \n\n";
//     cout<<pallindrome(arr,n);


// cout<<endl<<endl<<"Everything Is Fine\n=== Code Execution Successful ==="<<endl<<endl;
//     return 0;
// }
