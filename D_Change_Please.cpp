#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    vector<int>tamim;
    for(int i=0;i<T;i++)
    {
        int x;
        cin>>x;
        int pay=100-x;
        if(pay<0)
        {
            tamim.push_back(0);
        }
        else
        {
           tamim.push_back((pay /10)*10);
        }
    }
    for(int ans:tamim)
    {
         cout<<ans<<endl;
    }
    return 0;
}