#include<bits/stdc++.h>
using namespace std;
int main ()
{
  unordered_map<string, int>m;
 m["tv"]=110;
  m["laptop"]=50;
  m["headphones"]=100;

for(auto p:m)
{
  cout<< p.first << " "<< p.second << endl;
}
return 0;
}