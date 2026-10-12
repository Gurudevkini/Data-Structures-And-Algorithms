#include<bits/stdc++.h>
using namespace std;
int main()
{
//int count=0;
int num=583246;
int count_odd_num=0;
int digit=0;
while(num>0)
{
  //count++;
  digit=num%10;
  num=num/10;

if(digit%2!=0)
{
count_odd_num++;
}
}
cout<<"The Odd Number digits count is: "<<count_odd_num<<endl;
}