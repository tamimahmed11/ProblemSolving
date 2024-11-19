// https://codeforces.com/problemset/problem/1374/A
#include<bits/stdc++.h> 
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        long long ans=(c-b)/a*a+b;
        if(ans>c)
        {
            ans=ans-a;
        }
        cout<<ans<<endl;
        int n;

    }
    return 0;
}