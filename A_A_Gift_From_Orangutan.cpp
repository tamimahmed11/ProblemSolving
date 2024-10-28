#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n; cin>>n;
        int mx = 0, mn = 2e5;
        int x;
        for(int i = 0; i<n; i++){
            cin>>x;
            mx = max(x,mx);
            mn = min(mn, x);
        }
        long long ans = (mx-mn)*(n-1);
        cout<<ans<<endl;
    }
    return 0;
}
