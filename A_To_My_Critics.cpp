// https://codeforces.com/problemset/problem/1850/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int ans=a+c;
        int ans1=a+b;
        int ans2=b+c;
        if(ans>=10|| ans1>=10||ans2>=10)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}