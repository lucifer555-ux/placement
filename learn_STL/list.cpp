#include<bits/stdc++.h>
using namespace std;
int main()
{

    cout<<"LIST IN STL "<<endl;
    list <int> l;
    l.push_back(1);   

    list<int> l1(5,100); // 5 indicates the size and 100 indicates value
    list<int> l2(l1);

    cout<<"Printing list L2  : " <<endl;
    for (int i:l2)
    {
    cout<<i<<" ";  
    }
    cout<<endl;

    cout<<"Erase function on L1"<<endl;
    l1.erase(l1.begin());
    for (int i:l1)
    {
    cout<<i<<" ";  
    }
    cout<<endl;

    cout<<"Size of list L1-->" << l1.size()<<endl;

    return 0;
}