#include<bits/stdc++.h>
using namespace std;
void print(vector<int> &arr)
{
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector <int> vect1;
    int element;
    int m;
    cin>>m;
for (int i=0;i<m;i++)
{
    // cout<<"Enter a value want to add n array at index"<<i<<" \n";
    cin>>element;
    vect1.push_back(element);
}
print(vect1);
cout<<"Enter The size of array/Vector::"<<vect1.size();
   cout<<"\nNow i will remove element from vector \n";
    vect1.pop_back();
    print(vect1);
    // cout<<"now we will know ablout size of vector"<<vect1.size();
    cout<<"NOw we will know ablout iteretator:: \n";
    vector<int> :: iterator iter = vect1.begin();
    // vect1.insert(iter,566); //is se 0 index pe add hoga
    // vect1.insert(iter+1,566); // isse 0+1=1 index pe add hoga
    vect1.insert(iter+3,5,600); // is se 0+3=3 index se 600 add ho jayega 3+5=8th index tak
    print(vect1);
    

cout<<endl<<endl<<"Everything Is Fine"<<endl<<endl;
    return 0;
}
