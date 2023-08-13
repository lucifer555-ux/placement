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

return 0;
}