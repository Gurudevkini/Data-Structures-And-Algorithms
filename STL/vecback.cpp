#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int>vec ={1,2,3,4,5,6};
 // vector<int>::reverse_iterator it; /// Here we will use rbegin() which is pointing to last element 6 and rend() that is pointing towards the 0th postion that is b4 1
  for(auto it=vec.rbegin(); it!=vec.rend(); it++)
  {
    cout<< *(it)<<endl;
  }
}