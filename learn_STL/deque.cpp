#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Deque

    cout<<"DEQUE in STL"<<endl;
    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    for (int i:d)
    {
    cout<<i<<" ";  
    }
    cout<<endl;

    cout<<"Print 1st element index -->  " << d.at(1)<<endl; 
    
    cout<<"Front element -->  " << d.front()<<endl; 
    cout<<"Back element -->  " << d.back()<<endl; 

    
    cout<<"Empty or Not --> "<<d.empty()<<endl;
    cout<<"before erase --> "<<d.size()<<endl;

    d.erase(d.begin(),d.begin() + 1);
    cout<<"after erase --> "<<d.size()<<endl;

    for (int i:d)
    {
    cout<<i<<" ";  
    }
    cout<<endl;

    return 0; 
}