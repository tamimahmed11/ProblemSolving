#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        vector<int>v1(a+1,0);
        for(int i=1;i<=a;i++)
        {
            cin>>v1[i];
        }
        vector<int>v2(b);
        for(int i=0;i<b;i++)
        {
            cin>>v2[i];
        }
        int cnt=0;
        for(int i=0;i<b;i++)
        {
            int req=v2[i];
            if(v1[req]>0)
            {
                v1[req]--;
            }
            else
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}