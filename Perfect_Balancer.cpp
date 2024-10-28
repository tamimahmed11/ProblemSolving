#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    vector<ll>v(n+1), sum(n+1);
    for(ll i = 1; i<=n; i++){
        cin>>v[i];
        sum[i] = sum[i-1]+v[i];
    }
    for(ll i = 1; i<=n; i++){
        if(sum[i] == (sum[n] - sum[i-1])){
            cout<<sum[i]<<" "<<i<<endl;
            return 0;
        }
    }
    cout<<"UNSTABLE\n";
}