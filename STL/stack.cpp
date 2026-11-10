#include<bits/stdc++.h>
using namespace std;
int main()
{
  stack<int>s;
  s.push(1);
  s.push(2);
  s.emplace(3); // all the 3 elements are been inserted into a Stack
  while(!s.empty())
  {
 cout<< s.top() <<" "; //3
   s.pop();
  }
cout<<endl;
 return 0;
}