#include <bits/stdc++.h>
using namespace std;
int main()
{
  int nums[5] = {14, 7, 29, 3, 21};
  int largest = 0;
  for (int i = 0; i < 5; i++)
  {
    if (nums[i] > largest)
    {
      largest = nums[i];
    }
    }
  cout << largest << endl;
}