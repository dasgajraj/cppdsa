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
string reverseParentheses(string s){
  vector<char> v(s.begin(), s.end());
    
    int n = v.size();
    vector<int> openBrackets; // Stack to hold index of open brackets
    
    for (int i = 0; i < n; ++i) {
        if (v[i] == '(') {
            openBrackets.push_back(i);
        } else if (v[i] == ')') {
            int openIndex = openBrackets.back();
            openBrackets.pop_back();
            reverse(v.begin() + openIndex + 1, v.begin() + i);
        }
    }
    
    string result; // removing brackets and storing ans
    for (char c : v) {
        if (c != '(' && c != ')') {
            result += c;
        }
    }
    
    return result;    
}


int main()
{
    string s1="(ed(et(oc))el)";
    // gets(s1);
    cout<<s1<<endl;

    cout<<reverseParentheses(s1)<<endl;



    
cout<<endl<<endl<<"Everything Is Fine\n=== Code Execution Successful ==="<<endl<<endl;
    return 0;
}
