#include<bits/stdc++.h>
using namespace std;
int main()
{
    
//Pairs in C++ STL
cout<<"Pairs in STL :- "<<endl;
pair <int,int> p = {1,3};
cout<< p.first << "  " << p.second;
cout<<endl;

pair <int,pair<int,int>> num = {1,{3,4}};
cout<< num.first << "  " << num.second.second;
cout<<endl;

pair<int,int> arr[] = {{1,2},{3,4},{5,6}};
cout<< arr[1].second<<endl; 

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

// VECTORS 
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

































/*
cout<<"Vectors"<<endl;
vector<int> v;
v.push_back(1);
v.emplace_back(2);

vector<pair<int,int>> vec;
vec.push_back({1,2});
vec.emplace_back(1,2);

//{100,100,100,100,100}
vector<int> v3(5,100); // to store 5 instances of 100

vector<int> v4(5);

vector<int> v1(5,20); 
vector<int> v2(v1);
cout<<v1.at(0);
*/














return 0;
}