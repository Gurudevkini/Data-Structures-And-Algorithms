#include<bits/stdc++.h>
using namespace std;
int main()
{
int n=583246;
int digit=0;
int count=0;
int countevenonly=0;
while(n>0)
  {
    count++;
    digit=n%10;
   n=n/10;
   if(digit%2==0)
   {
     countevenonly++;
   }
  }
  cout<<"Total Count of digits :"<<count<<endl; 
  cout<<"Total even numbers are :"<<countevenonly<<endl; 
}