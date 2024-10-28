#include<bits/stdc++.h>
using namespace std;
#define ll  long long
int main()
{
    ll n = 2e9,q;
    // cin>>n>>q;
    vector<ll>v[n];
    // for(int i = 1; i<=(n/2); i++){
    //     v.push_back(i);
    //     v.push_back(i);
     
    // }
    // vector<unsigned long long>sum(n+1);
    // for(int i = 0; i<n; i++){
    //     sum[i+1] = sum[i]+v[i];
    // }
    
    while (q--)
    {
        ll l, r;
        cin>>l>>r;
        // cout<<sum[r]-sum[l-1]<<endl;
        ll ans = 0;
        // for(int i = l-1; i<r; i++)ans+=v[i];
        cout<<ans<<'\n';
    }
    
    
}