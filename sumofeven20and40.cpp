#include<bits/stdc++.h>
using namespace std;
int main()
{
  int sum=0;
  for(int i=20; i<=40; i++)
  {
    if(i%2==0)
    {
      sum+=i;
    }

  }
  cout<<"The Sum of even Number from 20 and 40: "<< sum <<endl;
}