// https://codeforces.com/problemset/problem/1791/C
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int l=0,r=n-1,ans=n;
        while(l<=r)
        {
            if(s[l]==s[r])
            {
                break;
            }
            else
            {
                ans=ans-2;
                l++,r--;
            }
        }
        cout<<ans<<endl;
    }
}