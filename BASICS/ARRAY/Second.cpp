#include <bits/stdc++.h>
using namespace std;

int main()
{
  int nums[6] = {10, 5, 20, 8, 15, 20};
  int first = INT_MIN;
  int second = INT_MIN;

  for (int i = 0; i < 6; i++)
  {
    // Fix: Check if current element is greater than the largest found so far
    if (nums[i] > first)
    {
      second = first;
      first = nums[i];
    }
    // Check if it's smaller than the largest but larger than the second largest
    else if (nums[i] < first && nums[i] > second)
    {
      second = nums[i];
    }
  }

  cout << "The largest Number is " << first << endl;
  cout << "The Second largest Number is " << second << endl;

  return 0;
}