// https://codeforces.com/problemset/problem/230/A
#include<bits/stdc++.h>
using namespace std;
int Tamim()
{
    int s,n;
    cin>>s>>n;
    vector<pair<int,int>>daragon;
    for(int i=0;i<n;i++)
    {
        int xi,yi;
        cin>>xi>>yi;
        daragon.push_back({xi,yi});
    }
    sort(daragon.begin(),daragon.end());
    for(int i=0;i<n;i++)
    {
        int maxi=daragon[i].first;
        int max2=daragon[i].second;
        if(s>maxi)
        {
            s=s+max2;
        }
        else
        {
            cout<<"NO"<<endl;
            return false;
        }
    }
    cout<<"YES"<<endl;
    return false;
}
int main()
{
    Tamim();
    return 0;
}