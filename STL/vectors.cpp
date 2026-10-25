#include<bits/stdc++.h>

using namespace std;
int main()
{
 vector<int>vec;
  vec.push_back(1);
   vec.push_back(2);
    vec.push_back(3);
     vec.push_back(4);
     vec.push_back(5);

for(int val: vec)
{
  cout<<val<<" ";
}
cout<< endl<<vec.size() <<endl;
cout<<vec.capacity()<<endl;
cout<<vec.at(2)<<endl;
cout<<vec[3]<<endl;
cout<<"front "<< vec.front()<<endl;
cout<<"Back "<< vec.back()<<endl;

}