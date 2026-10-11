#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n=9138;
  int digit=0;
int maxNum=0;
while(n>0) 
{
  digit=n%10;
  if(digit>maxNum)
  {
   maxNum=digit;
  }
   n=n/10;
}
cout<<"The largest digit in the series is "<<maxNum<<endl;
}