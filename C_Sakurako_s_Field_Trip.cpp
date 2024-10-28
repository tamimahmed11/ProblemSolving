#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<int>v(n+2);
        for(int i = 1; i<=n; i++){
            cin>>v[i];
        }
        for(int i = 1; n-i>=0; i++){
            if(v[i] != v[n-i+1]){
                int x = 0,y = 0, x1 = 0, y1 = 0;
                if(v[i] == v[i-1])x++;
                if(v[i] == v[i+1])x++;
                if(v[n-i+1] == v[n-i])y++;
                if(v[n-i+1] == v[n-i+2])y++;

                if(v[n-i+1] == v[i-1])x1++;
                if(v[n-i+1] == v[i+1])x1++;
                if(v[i] == v[n-i])y1++;
                if(v[i] == v[n-i+2])y1++;
                if((x+y)>(x1+y1))swap(v[i], v[n-i+1]);
            }
        }
        int ans = 0;
        for(int i = 1; i<n; i++){
            if(v[i] == v[i+1])ans++;
        }
        cout<<ans<<endl;
    }
    
}