#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        if(v[i]!=x)
        {
            ans.push_back(v[i]);
        }
    }
    for(int i=0;i<ans.size();i++)
    {
        if(i>0)
        {
            cout<<" ";
            
        }
        cout<<ans[i];
    }
    cout<<endl;
    return 0;
}