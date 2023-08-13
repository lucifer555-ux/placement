#include <iostream>
using namespace std;

int main() {
    string str="co//de??spe;,edy";  //initializing a string
    string temp = ""; //initializing a temporary string
    cout<<"initial string is: "<<str<<endl;

    
    for (int i = 0; i < str.size(); ++i) 
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) //initializing condition  
        {
            temp = temp + str[i];//passing characters that match condition to temp string from initialized string
        }
    }
    str = temp;//initializing temp as new string 
    cout << "modified String is: " << str;//getting output
    return 0;
}