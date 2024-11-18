#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,b,s;
    cin>>g>>b>>s;
    int gold=(5-g);
    int bronze=(5-b);
    int silver=(5-s);
    // int gold=max(0,5-g);
    // int bronze=max(0,5-b);
    // int silver=max(0,5-s);

    int ans=gold+bronze+silver;
    cout<<ans<<endl;
    return 0;
}