#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l;
        cin>>l;
        vector<int >v(l);
        for(int i=0;i<l;i++)
        {
            cin>>v[i];
        }
        bool f=true;
        for(int i=1;i<l;i++)
        {
            int x=abs(v[i-1]-v[i]);
            if(x!=5 && x!=7)
            {
                cout<<"NO"<<endl;
                f=0;
                break;
            }
            
        }
        if(f)
        {
            cout<<"YES"<<endl;
        }
    }
}