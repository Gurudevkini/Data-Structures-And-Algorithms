#include<bits/stdc++.h>
using namespace std;
int main()
{
  int nums[5] = {14, 7, 29, 3, 21};
  int small = nums[0];
  for(int i=1; i<5; i++)
  {
  if(nums[i]<small) 
  {
    small=nums[i];
  }
  }
  cout<<small<<endl;
}