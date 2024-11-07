#include<bits/stdc++.h>
using namespace std;
void solve()
{
     string st,te;
    cin>>st>>te;
    int ans=0;
    for(int i=0;i<st.size();i++)
    {
        if(st[i]!=te[i])
        {
            ans++;
        }
    }
    cout<<ans<<endl;
}
int main()
{
   solve();
   return 0;
}