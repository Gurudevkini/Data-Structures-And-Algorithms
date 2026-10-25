// ANOTHER TRYY
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int nums[6] = {10, 5, 20, 8, 15, 20};
int largest =nums[0];
int second_largest=nums[0];

for(int i=0; i<6; i++)
{
  if(nums[i]>largest)
  {
    largest=nums[i];
  }
}
cout<<"Largest :"<<largest<<endl;
}