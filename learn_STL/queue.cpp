#include<bits/stdc++.h>
using namespace std;
int main()
{


    cout<<"QUEUE in STL"<<endl;
    queue <string> q;

    q.push("Visaj");
    q.push("Pareshkumar"); 
    q.push("Panchal");


    cout<<"First Element --> " <<q.front() <<endl;
    q.pop();
    cout<<"First Element --> " <<q.front() <<endl;
    q.pop();
    cout<<"Front Element --> " <<q.front() <<endl;
    cout<<"Back Element --> " <<q.back() <<endl;



return 0;
}
