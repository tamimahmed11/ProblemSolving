#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t; cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll s1,s2 = 0;
        for(int i = 0; i<n-2; i++){
            ll x; cin>>x;
            s2 +=x;
        }
        cin>>s1;
        ll dif = s1-s2;
        cout<<dif+1<<endl;
    }
    
}