#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    int t1=z;
    int t2=(4-x-y-z)+x;
    if (t1<t2)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";

    }
    return 0;
    
}