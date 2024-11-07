#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        vector<int>v;
        for(int i=0;i<=x;i++)
        {
            v.push_back(pow(2,i));
        }
        sort(v.rbegin(),v.rend());
        int maxi=0;
        for(int i=0;i<y;i++)
        {
            maxi=maxi+v[i];
        }
        cout<<maxi<<endl;
    }
    return 0;
}