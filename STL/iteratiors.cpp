#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int>vec={1,2,3,4,5,6};
  cout<<" The Vector Iterators"<<endl;
  cout<<"The first Element is "<< *(vec.begin())<<endl;
  cout<<" The Last element -1 that is Grabage value is " <<*(vec.end())<<endl;
  return 0;
}