#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        map<int,long long>m;
        for(int i = 0; i<k; i++){
            int a,b;
            cin>>a>>b;
            m[a] +=b;
        }
        vector<pair<int, long long>>ans;
        for(auto u:m){
            int a = u.first;
            long long b = u.second;
            ans.push_back({b,a});
        }
        sort(ans.rbegin(), ans.rend());
        long long tt = 0;
        for(int i = 0; i<n && i<ans.size(); i++){
            tt +=ans[i].first;
        }
        cout<<tt<<endl;
    }
}