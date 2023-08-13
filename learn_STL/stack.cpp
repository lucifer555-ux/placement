#include<bits/stdc++.h>
using namespace std;
int main()
{


    cout<<"STACK in STL"<<endl;
    stack <string> s;

    s.push("Visaj");
    s.push("Pareshkumar"); 
    s.push("Panchal");


    cout<<"Top Element --> " <<s.top() <<endl;
    s.pop();
    cout<<"Top Element --> " <<s.top() <<endl;
    s.pop();
    cout<<"Top Element --> " <<s.top() <<endl;

    
    cout<<"Empty or Not --> "<<s.empty()<<endl;
    cout<<"Size of stack --> "<<s.size()<<endl;


return 0;
}