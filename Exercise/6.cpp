#include<bits/stdc++.h>
using namespace std;
int main()
{
int n=29384;
int maxNum=0;
int digit;
while (n>0)
{
  digit=n%10;
  if(digit>maxNum)
  {
    maxNum=digit;
  }
  n=n/10;
}
cout<<"The largest digit is "<<maxNum<<endl;
}
