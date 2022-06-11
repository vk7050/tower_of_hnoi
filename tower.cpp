#include<bits/stdc++.h>
using namespace std;

void TOWER(char s,char d,char e,int n)
{
  if(n>0)
  {
    TOWER(s,e,d,n-1);
      cout<<n<<" transfer from "<<s<<" to "<<d<<endl;
    TOWER(e,d,s,n-1);
  }
}
int main()
{
  int n;
  cin>>n;
  char s='s',d='d',e='e';
  TOWER(s,d,e,n);
  return 0;
}
