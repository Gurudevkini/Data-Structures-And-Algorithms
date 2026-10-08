#include <bits/stdc++.h>
using namespace std;
int factorial(int n)
{
  if(n==0)
  {
    return 1;
  }
  int answer=1;
  for(int i=1; i<=n; i++)
  {
   answer*=i;
  }
  return answer;
}
int main()
{
cout<<"The Factorial of this number is :"<<factorial(0)<<endl;
}