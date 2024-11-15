#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,y,z;
    cin>>x>>y>>z;
    double t1=z;
    double t2=(4-x-y-z)+x;
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