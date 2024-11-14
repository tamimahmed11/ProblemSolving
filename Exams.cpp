#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int a,b,c;
    cin>>a>>b>>c;
    // int ans=(c*100)/(a*b);
    int restult=(a*b)/2;
    if(c>restult)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
  }
  return 0;
}