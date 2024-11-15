#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll n; cin>>n;
    vector<ll>v(n);
    for(auto &u:v)cin>>u;
    sort(v.begin(), v.end());
    ll ans = v[n-1] - v[0];
    ans = min(ans, v[n-1]-v[1]);
    ans = min(ans, v[n-1]-v[2]);
    ans = min(ans, v[n-2]-v[0]);
    ans = min(ans, v[n-3]-v[0]);
    ans = min(ans, v[n-2]-v[1]);
    cout<<ans<<endl;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}