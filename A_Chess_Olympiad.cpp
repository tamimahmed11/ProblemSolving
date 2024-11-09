#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    double t1=x+0.5*y;
    double t2=(4-x-y-z)+0.5*y;
    if (t1>t2)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
        
    }
    return 0;
}