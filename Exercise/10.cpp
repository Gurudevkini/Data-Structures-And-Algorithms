#include<bits/stdc++.h>
using namespace std;
int main()
{
int n=583246;
int digit=0;
int count;
while(n>0)
  {
     count++;
    digit=n%10;
   n=n/10;
  }
  cout<<"The Count of digits :"<<digit<<endl; 
}