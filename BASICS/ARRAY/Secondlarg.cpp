#include<bits/stdc++.h>
using namespace std;
int main()
{
int nums[6] = {10, 5, 20, 8, 15, 20};
int largest = nums[0];
int second_largest=nums[0];
for(int i=0; i<6; i++)
  {
    if(largest<nums[i])
    {
     largest=nums[i];
    }
  }
  for(int i=0; i<6; i++)
  {
     if(second_largest>nums[i] && second_largest<largest)
     {
       second_largest=nums[i];
     }
    }

  cout<<"The largest Number is "<<largest<<endl;
  cout<<"The Second largest Number is "<<second_largest<<endl;

}