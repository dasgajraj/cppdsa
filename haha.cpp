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
float runratee(float runs,float overs)
{
    return runs/ overs;
}
float runs(float runrate,float over){
    return runrate*over;
}
int main()
{
    float runrate,goal,overs;
    cout<<"position in first half :: \n";
    cout<<"give runrate :: ";
    cin>>runrate;
    cout<<"give overs :: ";
    cin>>overs;
    cout<<"give goal :: ";
    cin>>goal;
    int requird_runs=goal-runs(runrate,overs);
    overs=20-overs;
    cout<<"team 2 have to maintain runrate of :: "<<runratee(requird_runs,overs);
    // cout<<"team 2 have to maintain runrate of :: "<<(runrate((goal)-(runs(runrate,overs)),(20.0)-(overs)));
cout<<endl<<endl<<"Everything Is Fine\n=== Code Execution Successful ==="<<endl<<endl;
    return 0;
}
