#include<bits/stdc++.h>
using namespace std;
int main()
{
  int num=123;
  int orginal=num;
  int rev =0;
  int digit=0;
  while(num>0) 
  {
     digit= num%10;
     rev= rev*10+digit;
     num=num/10;
  }
  if(rev==orginal)
  {
    cout<<"The Number is Palindrome";
  }
  else
  {
    cout<<"The Number is Not a Palindrome";
  }
}