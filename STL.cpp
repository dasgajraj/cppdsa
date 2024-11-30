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
void print_deque(deque<int> &d,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<d[i]<<" ";
    }
    cout<<endl;
}



int main()
{
    cout<<"Use of STL functions::";
    cout<<"\nOUR FIRST DATA STRUCTURE IS ::ARRAY:: \n\n";
    // basic array hota ha ye
    int basic[3]={1,2,3};
    //STL ARRAY
    array<int,3> a={1,2,3};
    // array<int,3> b;
    // how to find size
    int n=a.size();
    // how to access elements
    for(int i=0;i<n;i++){cout<<a[i]<<" ";}
    // how to get sprcific element in array of given index
    cout<<"\nElement at 2nd Index::"<<a.at(2)<<endl;
    //to check is given given empty or not
    cout<<"Is array empty?::"<<a.empty()<<endl;
    // get first and last element
    cout<<"First Element::"<<a.front()<<endl;
    cout<<"Last Element::"<<a.back()<<endl;
    
    
    
    
    
    
    
    cout<<"\n\nOUR SECOND DATA STRUCTURE IS ::VECTOR:: \n\n";
    // vector ye dynamic array hota hai jaise hi hamara vector bhar jata hai for example agar vector me 4 elements hai orabhi hum 5th elemt daale to vector apna size double kr deta hai 
    vector<int> v;
    cout<<v.capacity()<<"\t"<<v.size()<<"\n";
    v.push_back(1);
    cout<<v.capacity()<<"\t"<<v.size()<<"\n";
    v.push_back(2);
    cout<<v.capacity()<<"\t"<<v.size()<<"\n";
    v.push_back(3);
    cout<<v.capacity()<<"\t"<<v.size()<<"\n";
    v.push_back(4);
    cout<<v.capacity()<<"\t"<<v.size()<<"\n";
    v.push_back(5);
    cout<<v.capacity()<<"\t"<<v.size()<<"\n";
    //jaiske ki yaha pr hum dekh paa rhe hai ki jaise hi hamara vector bhar jata hai to vo apne liye double space block kr leta hai jise hum arr.capacity() se dekh paa rhe hai jbki size normally hi badhta hai
    
    //access specific index element
    cout<<"\nElement at 2nd Index::"<<v.at(2)<<endl;
    // how to get first and last element
    cout<<"First Element::"<<v.front()<<endl;
    cout<<"Last Element::"<<v.back()<<endl;
    //now deleteing an elememt
    cout<<"Printing before popback::";print_vector(v,v.size());
    v.pop_back();
    cout<<"Printing after popback::";print_vector(v,v.size());
    //how to clear all vector (jisme size 0 ho jayega lekin capacity 0 nhi hoti)
    cout<<"size before clearing "<<v.size()<<" capacity before clearing "<<v.capacity()<<endl;
    v.clear();
    cout<<"size after clearing "<<v.size()<<" capacity after clearing "<<v.capacity()<<endl;
    //how to check is vector empty or not
    cout<<"Is vector empty?::"<<v.empty()<<endl;
    v={1,2,3,4,5,6,7,8,9,10};
     cout<<"NOw we will know ablout iteretator:: \n";
    vector<int> :: iterator iter = v.begin();
    // vect1.insert(iter,566); //is se 0 index pe add hoga
    // vect1.insert(iter+1,566); // isse 0+1=1 index pe add hoga
    v.insert(iter+3,5,600); // is se 0+3=3 index se 600 add ho jayega 3+5=8th index tak
    print_vector(v,v.size());

    //we can initialise a vector jisme hume siz eor elements phle se pta honge to usme <int(ka matlb size hoga),int(ka matlab element honge)>
    vector<int> example(5,1);
    print_vector(example,example.size());
    //agar hame dusre 1 vector ko dusre ko equal kr de to aise krte hai.......
    vector<int> vect1(example);
    print_vector(vect1,vect1.size());
    










    cout<<"\n\nOUR THIRD DATA STRUCTURE IS ::DEQUE:: \n\n";
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    print_deque(d,d.size());
    cout<<"or we can print like this\n";
    for(int i:d){cout<<i<<" ";}
    cout<<"\n";
    // d.pop_back();
    // d.pop_front();
    // print_deque(d,d.size());
    cout<<"Element at 1 is "<<d.at(1)<<endl;
    //print front and back
    cout<<"Front Element is "<<d.front()<<endl;
    cout<<"Back Element is "<<d.back()<<endl;
    //check empty or not
    cout<<"Is deque empty?::"<<d.empty()<<endl;
    // now we erase
    cout<<"Print before erase\n";
    print_deque(d,d.size());
    d.erase(d.begin(),d.begin()+1);
    cout<<"Print after erase\n";
    print_deque(d,d.size());

    






    cout<<"\n\nOUR FOURTH DATA STRUCTURE IS ::LIST:: \n\n";
    //isme hum sidha elemnt access nahi kar paayenge.....
    list<int> l;
    l.push_back(1);
    l.push_front(2);
    for(int i:l){cout<<i<<" ";}cout<<endl;
    cout<<"Before erase\n";
    for(int i:l){cout<<i<<" ";}cout<<endl;
    l.erase(l.begin());
    cout<<"After erase\n";
    for(int i:l){cout<<i<<" ";}cout<<endl;
    cout<<"size of list is ::"<<l.size()<<endl;
    list <int> l1(5,100);
    list <int> l2(l1);
    cout<<"Print l1 list\n";
    for(int i:l1){cout<<i<<" ";}cout<<endl;
    cout<<"Print l2 list\n";
    for(int i:l2){cout<<i<<" ";}cout<<endl;
    cout<<"is list 2 empty?::"<<l2.empty()<<endl;






    cout<<"\n\nOUR FIFTH DATA STRUCTURE IS ::STACK:: \n\n";
    //jo sbse phle eleemt aayega vo sbse last me linkelga matlab LIFO(LAST IN FIRST OUT) ex. stack of plates
    stack<string> s;
    s.push("das");
    s.push("gajraj");
    s.push("sharma");
    cout<<"Top Element is :: "<<s.top()<<"  size of stack at starting "<<s.size()<<endl;
    //now removing , to top vala remove hoga......
    s.pop();
    cout<<"Top Element is :: "<<s.top()<<"  size of stack after removing 1 element "<<s.size()<<endl;
    s.pop();
    cout<<"Top Element is :: "<<s.top()<<"  size of stack after removing 2 element "<<s.size()<<endl;
    cout<<"Empty or not?::"<<s.empty();cout<<endl;
    cout<<"\n\nOUR SIXTH DATA STRUCTURE IS ::QUEUE:: \n\n";
    cout<<"is list 2 empty?::"<<l2.empty()<<endl;





    cout<<"\n\nOUR SIXTH DATA STRUCTURE IS ::QUEUE:: \n\n";
    //ye ek line ki tarah hai jo phle lagega vahi pehle aayega (FIFO)FIRST IN FIRST OUT
    queue<string> q;
    q.push("das");
    q.push("gajraj");
    q.push("sharma");
    cout<<"\nFront Element is :: "<<q.front()<<" Size at starting :"<<q.size();
    q.pop();
    cout<<"\nFront Element is :: "<<q.front()<<" Size at 1st pop :"<<q.size();
    q.pop();
    cout<<"\nFront Element is :: "<<q.front()<<" Size at 2nd pop :"<<q.size();






    cout<<"\n\nOUR SEVENTH DATA STRUCTURE IS ::PRIORITY_QUEUE:: \n\n";
    // max heap
    priority_queue<int> maxi;
    // min heap
    priority_queue<int,vector<int>,greater<int>> mini;
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    maxi.push(-1);
    cout<<"Size Is "<<maxi.size()<<"\n";
    n=maxi.size();
    for(int i=0;i<n;i++){cout<<maxi.top()<<" ";maxi.pop();}
    cout<<endl;
    cout<<"is it is empty?::"<<maxi.empty()<<endl;
    mini.push(1);
    mini.push(3);
    mini.push(2);
    mini.push(0);
    mini.push(-1);
    cout<<"Size Is "<<mini.size()<<"\n";
    n=mini.size();
    for(int i=0;i<n;i++){cout<<mini.top()<<" ";mini.pop();}
    cout<<endl;
    cout<<"is it is empty?::"<<mini.empty()<<endl;







    cout<<"\n\nOUR EIGHT DATA STRUCTURE IS ::SETS:: \n\n";
    set<int> s1;
    s1.insert(5);
    s1.insert(5);
    s1.insert(5);
    s1.insert(1);
    s1.insert(1);
    s1.insert(6);
    s1.insert(6);
    s1.insert(6);
    s1.insert(0);
    s1.insert(0);
    s1.insert(0);
    for(int i:s1){cout<<i<<" ";}cout<<endl;
    // s1.erase(s1.begin());
    set <int> ::iterator it=s1.begin();it++;
    s1.erase(it);
    for(int i:s1){cout<<i<<" ";}cout<<endl;
    cout<<"Check 5 is present or not "<<s1.count(5)<<endl;
    cout<<"Check -5 is present or not "<<s1.count(-5)<<endl;
    set<int> ::iterator itr=s1.find(5);
    cout<<"Value 5 present at index of "<<*it<<endl;
    for(auto it=itr;it!=s1.end();it++){cout<<*it<<" ";}cout<<endl;








    cout<<"\n\nOUR NINTH DATA STRUCTURE IS ::MAP:: \n\n";
    map<int,string> m;
    m[1]="das";
    m[13]="sharma";
    m[2]="gajraj";
    m.insert({66,"DKD"});
    cout<<"\n before erase\n";
    for(auto i:m){cout<<i.first<<" "<<i.second<<endl;}
    cout<<"Check 13 is present or not "<<m.count(13)<<endl;
    cout<<"Check -13 is present or not "<<m.count(-13)<<endl;
    cout<<"\n after erase\n";
    m.erase(13);
    for(auto i:m){cout<<i.first<<" "<<i.second<<endl;}


    cout<<"\n\nUse of STL functions::";
    vector<int> v12;
    v12.push_back(6);
    v12.push_back(4);
    v12.push_back(3);
    v12.push_back(2);
    v12.push_back(1);
    print_vector(v12,v12.size());
    cout<<binary_search(v12.begin(),v12.end(),6)<<endl;

    










cout<<endl<<endl<<"Everything Is Fine\n=== Code Execution Successful ==="<<endl<<endl;
    return 0;
}
