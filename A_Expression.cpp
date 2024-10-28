//https://codeforces.com/problemset/problem/479/A
#include<bits/stdc++.h>
using namespace std;
void Tamim()
{
      int a,b,c;
        cin>>a>>b>>c;
        int max1=a+b*c;
        int max2=a*(b+c);
        int max3=a*b*c;
        int max4=(a+b)*c;
        int max5=a+b+c;
    
    int ans=max({max1,max2,max3,max4,max5});
    cout<<ans<<endl;
}
int main()
{
  
    Tamim();
    return 0;
}