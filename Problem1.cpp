#include <bits/stdc++.h>
using namespace std;
int sum(int n)
{
  int answer = 0;
  for (int i = 1; i <= n; i++)
  {
    answer += i;
  }
  return answer;
}
int main()
{
  cout << "Sum of Numbers is: " << sum(5) << endl;
}
