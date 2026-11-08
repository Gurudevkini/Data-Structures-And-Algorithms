#include<bits/stdc++.h>
using namespace std;
int main()
{
 vector<int>vec= {1,2,3,4,5,6,5,7,7};

 for(int val: vec) {
     cout<< val << " ";
 }
cout<< endl;
vec.erase(vec.begin() +7);
cout<< " REMOVED THE 7th ELEMENT "  << endl;
for(int val: vec) {
     cout<< val << " ";
 }
 
vec.insert(vec.begin()+9, 8);
vec.insert(vec.begin()+10, 9);
vec.insert(vec.begin()+11, 10);

 cout<< " INSERTING THE 8 9 and 10" << endl;
for(int val: vec)
{
 cout<< val << " ";
}
cout<< endl;
cout<< "front "<< vec.front() << endl;
cout<< "back " << vec.back() << endl;
  return 0;
}