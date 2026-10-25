
// GIVEN A TRY !!
#include<bits/stdc++.h>
using namespace std;
int main()
{
int nums[6] = {10, 5, 20, 8, 15, 20};
int largest = nums[0];
int second_largest=0;
for(int i=0; i<6; i++)
  {
    if(largest<nums[i])
    {
     largest=nums[i];
    }
    if(second_largest<largest)
    {
       if(nums[i]>second_largest)
       {
        second_largest=nums[i];
       }  
      }
     }

  cout<<"The largest Number is "<<largest<<endl;
  cout<<"The Second largest Number is "<<second_largest<<endl;

}