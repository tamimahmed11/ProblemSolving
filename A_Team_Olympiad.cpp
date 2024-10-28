#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
const int N=1e5+5;

void Tamim()
{
    vector<pair<int,int>>cnt1;
    vector<pair<int,int>>cnt2;
    vector<pair<int ,int>>cnt3;
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
        for(int i=0;i<n;i++)
        {
            if(v[i]==1)
            {
                cnt1.push_back({i+1,1});
            }
            else if(v[i]==2)
            {
                cnt2.push_back({i+1,2});
            }
            else
            {
                cnt3.push_back({i+1,3});
            }
        }
        
    // int ans=min({cnt1.size(),cnt2.size(),cnt3.size()});
    int ans=min(min(cnt1.size(),cnt2.size()),cnt3.size());
    cout<<ans<<endl;
    for(int i=1;i<ans;i++)
    {
        cout<<cnt1[i].first<<" "<<cnt2[i].first<<" "<<cnt3[i].first<<endl;
    }
    
}
int main()
{
    Tamim();
}