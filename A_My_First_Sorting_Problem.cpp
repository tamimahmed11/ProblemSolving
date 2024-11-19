#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a,c;
    cin>>a>>c;
    cout<<min(a,c)<<" "<<max(a,c)<<'\n';
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        for(int i=1;i<=t;i++)
        {
            solve();
        }
    }
    return 0;
}