#include<bits/stdc++.h>
using namespace std;
int main()
{
int count =0;
int n= 12733;
 while(n>0)
{
  count++;
  n= n/10;
}
cout<<"The count of numbers is : "<<count<<endl;
}