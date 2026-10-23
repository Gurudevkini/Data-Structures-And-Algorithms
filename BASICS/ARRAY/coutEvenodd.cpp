#include<bits/stdc++.h>
using namespace std;
int main()
{
  int nums[7] = {12, 5, 8, 3, 10, 7, 4};
  int countEven=0;
  int countOdd=0;
  for(int i=0; i<7; i++) 
  {
    if(nums[i]%2==0)
    {
      countEven++;
    }
    else
    {
      countOdd++;
    }
  }
  cout<<"Even: "<<countEven<<endl;
  cout<<"Odd: "<<countOdd<<endl;
}