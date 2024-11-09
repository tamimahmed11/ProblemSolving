#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    set<int>v={a,b,c,d};
    int ans=4-v.size();
    cout<<ans<<endl;
    return 0;
}