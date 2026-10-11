#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n=1234;
  int rev=0;
  int digit=0;
 while(n>0)
 {
   digit=n%10;
  rev= rev*10+digit;
  n=n/10;
 }
 cout<<"The Reverse Number is "<<rev<<endl;
}