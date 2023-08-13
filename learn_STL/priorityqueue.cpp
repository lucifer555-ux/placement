#include<bits/stdc++.h>
using namespace std;
int main()
{
      //max - heap
    priority_queue<int> maxi;
    
    //min - heap
    priority_queue<int,vector<int>, greater<int> > mini;

    cout<<"PRIORITY QUEUE in STL"<<endl;

  

    maxi.push(7);
    maxi.push(8);
    maxi.push(10);
    maxi.push(11);

    cout<<" size of max heap -->  "<<maxi.size()<<endl;
    int n = maxi.size();


    for (int i = 0; i < n; i++)
    {
        cout<<" "<<maxi.top()<<endl;
        maxi.pop();

    }
        cout<<endl;

    mini.push(7);
    mini.push(8);
    mini.push(10);
    mini.push(11);

    cout<<" size of min heap -->  "<<mini.size()<<endl;
    int m = mini.size();
    

    for (int i = 0; i < n; i++)
    {
        cout<<" "<<mini.top()<<endl;
        mini.pop();

    }
        cout<<endl;



return 0;

}
