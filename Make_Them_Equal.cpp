#include<bits/stdc++.h>
using namespace std;
int solve()
{
    int test; 
    cin>>test;
    while(test--) 
    {
        int a,b; 
        cin>>a>>b;
        string x,y;
        cin>>x>>y;
        int count=0;
        for(int i=0;i<a;i++) 
        {
            if (x[i]!=y[i]) 
            {
                count++;
            }
        }
        if (count<=b) 
        {
            cout <<"YES"<<endl;
        }
        else 
        {
            cout<<"NO"<<endl;
        }
    }

}
int main() 
{
    solve();
    return 0;
}
