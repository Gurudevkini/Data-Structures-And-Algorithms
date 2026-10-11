  #include<bits/stdc++.h>
 using namespace std; 
 int main()
 {
  int n=234;
  int sum=0;
  int digit;
  while(n>0)
  {  
    digit=n%10;
   sum= sum+digit;
    n=n/10;
  }
  cout<<"The Sum of Numbers is "<<sum<<endl;
 }