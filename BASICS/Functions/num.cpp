  #include<bits/stdc++.h>
  using namespace std;
 void checkNumber(int n)
  {
    if(n>0)
    {
      cout<<"Postive"<<endl;
    }
    else if(n==0)
    {
      cout<<"zero"<<endl;
    }
    else 
    {
      cout<<"Negative"<<endl;
    }
  }
  int main()
  {
    checkNumber(8);
    checkNumber(-3);
    checkNumber(0);
  }