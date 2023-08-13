#include<bits/stdc++.h>
using namespace std;
int main()
{

///Arrays

cout<<"Arrays in STL :- "<<endl;

array <int,4> a = {1,2,3,4};

int size = a.size();
cout<<"Size of a "<<size<<endl;
for(int i =0; i<size; i++)
{
    cout<<a[i]<<endl;
} 

cout<<"Element at 2nd index --> "<<a.at(2)<<endl;

cout<<"Empty or Not --> "<<a.empty()<<endl;
cout<<"First Element --> "<<a.front()<<endl;
cout<<"Last Element --> "<<a.back()<<endl;

return 0;
}