#include <bits/stdc++.h>
using namespace std;
int findMax(int a, int b)
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
  cout << findMax(4, 5) << endl;
}