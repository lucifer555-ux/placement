#include<bits/stdc++.h>
using namespace std;
int main()
{


cout<<"VECTORS "<<endl;
vector<int> v;
v.push_back(1);
v.emplace_back(2);
v.emplace_back(3);

// Capacity shows the size of vector , how much memory is assign ;
cout<<"Capacity --> "<<v.capacity()<<endl;
// Size shows the total number of elements 
cout<<"Size --> "<<v.size()<<endl;

cout<<"Element at 2nd index --> "<<v.at(2)<<endl;

cout<<"Front --> "<<v.front()<<endl;
cout<<"Back --> "<<v.back()<<endl;

cout<<"Before Pop" <<endl;
for (int i:v)
{
  cout<<i<<" ";  
}
  cout<<endl;

v.pop_back();

cout<<"After Pop" <<endl;
for (int i:v)
{
  cout<<i<<" ";  
}
cout<<endl;

cout<<"Before clear size : " <<v.size()<<endl;
v.clear();
cout<<"After clear size : " <<v.size()<<endl;

vector<int> a1(5,1); // 5 indicates the size and 1 indicates value

vector<int> a2(a1);

cout<<"New Vector : " <<endl;
for (int i:a2)
{
  cout<<i<<" ";  
}
cout<<endl;

return 0;
}