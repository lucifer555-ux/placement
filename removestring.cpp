#include<iostream>
#include<algorithm>

using namespace std;
int main() {
   string my_str = "ABAABACCABA";

   cout << "Initial string: " << my_str << endl;

   my_str.erase(remove(my_str.begin(), my_str.end(), 'A'), my_str.end()); //remove A from string
   cout << "Final string: " << my_str;
}

// begin()	This function returns an iterator to the beginning of the string.
// end()	This function returns an iterator to the next to the end of the string.