#include<bits/stdc++.h>
using namespace std;
int main()
{
  int num=583246;
  int digit=0;
  int smallest_digit=9;
  while(num>0)
  {
    digit= num%10;
    count++;
  num=num/10;
  if(digit<smallest_digit)
  {
    smallest_digit=digit;
  }
}
cout<<"The smallest digit is :"<<smallest_digit<<endl;
}