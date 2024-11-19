// https://vjudge.net/contest/670883#problem/C
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll n; cin>>n;
    vector<ll>v(n);
    for(auto &u:v)cin>>u;
    ll mx = *max_element(v.begin(),v.end());
    // cout<<mx<<endl;
    bool f = 1, z = 0;
    for(int i = 0; i<n; i++){
        if(v[i] != mx && v[i]!=0) f = 0;
    }

    if(f) cout<<"YES\n";
    else cout<<"NO\n";

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