#include <bits/stdc++.h>
using namespace std;
int getMax(int a, int b)
{
  if (a > b)
  {
    return a;
  }
  else
  {
    return b;
  }
}
int main()
{
  cout<<getMax(10, 20)<<endl;
  cout<<getMax(50, 30)<<endl;
  cout<<getMax(7, 7)<<endl;
}

