#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool ok(string s){
    bool f = 0;
    int l = s.size();;
    string t = "1100";
    for(int i = 0; i<l; i++){
        if(i+3<l && s[i] == t[0] && s[i+1] == t[1] && s[i+2] == t[2] && s[i+3] == t[3]){
            return 1;
        }
    }
    return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;cin>>s;
        int l = s.size();
        int k = 0;
        string t = "1100";
        for(int i = 0; i<l; i++){
            if(i+3<l && s[i] == t[0] && s[i+1] == t[1] && s[i+2] == t[2] && s[i+3] == t[3]){
                k++;
            }
        }
        // cout<<"k = "<<k<<endl;
        int q; cin>>q;
        while (q--)
        {
            int i;
            char v;
            cin>>i>>v;
            // s[i-1] = v;
            i--;
            // if(s[i] != v){
                int x,y;
                x = max(0, i-3);
                y = min(l-1, i+3);
                // cout<<"i = "<<i<<" x = "<<x<<" y = "<<y<<endl;
                for(int j = x; j<=y; j++){
                    if(j+3<l && s[j] == t[0] && s[j+1] == t[1] && s[j+2] == t[2] && s[j+3] == t[3]){
                        k--;
                        // break;
                    }
                }
                s[i] = v;
                for(int j = x; j<=y; j++){
                    if(j+3<l && s[j] == t[0] && s[j+1] == t[1] && s[j+2] == t[2] && s[j+3] == t[3]){
                        k++;
                        // break;
                    }
                }
                // cout<<"k = "<<k<<endl;

            // }
            if(k>0)cout<<"YES\n";
            else cout<<"NO\n";
            k = max(0,k);
        }
        
    }
}