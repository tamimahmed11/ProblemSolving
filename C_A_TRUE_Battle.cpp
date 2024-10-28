#include<bits/stdc++.h>
using namespace std;
void solve(){
    
        int n; cin>>n;
        string s;cin>>s;
        if(s[0] == '1' || s[n-1] =='1'){
            cout<<"YES\n";
            return;
        }
        for(int i = 1; i<n; i++){
            if(s[i] == s[i-1] && s[i]=='1'){
                cout<<"YES\n";
                return;
            }
        }
        cout<<"NO\n";
}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
