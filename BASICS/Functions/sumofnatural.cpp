#include<bits/stdc++.h>
using namespace std;
  int findsum(int n){
    if(n==0)
    {
    return 0;
    }
    int res= n*(n+1);
    int result =res/2;
    return result;
  }
  int main()
  {
    cout<<findsum(10)<<endl;
    return 0;
  }