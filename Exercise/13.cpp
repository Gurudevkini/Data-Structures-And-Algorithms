#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the Number whose Subract of Product and sum of integer"<<endl;
  cin>>n;
  int digit=0;
  int sum=0;
  int product=1;
  while (n>0)
  {
   digit=n%10;
   sum=sum+digit;
  product=product*digit;
   n=n/10;
  }
int answer= product-sum;
cout<<"The Final answer is "<<answer<<endl;
}