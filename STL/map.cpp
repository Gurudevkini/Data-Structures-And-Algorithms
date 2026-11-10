#include<bits/stdc++.h>
using namespace std;
int main()
{
  map<string,int>m;
  m["tv"]=110;
  m["laptop"]=50;
  m["headphones"]=100;
  

m.insert({"camera",25});
  for(auto p:m)
  {
    cout<<p.first << " "<< p.second << endl;
  }

if(m.find("camera") != m.end())
{
  cout<< "found\n";
}
else 
{
  cout<< "not found\n";
}
  return 0;
}