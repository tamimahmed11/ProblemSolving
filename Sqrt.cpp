#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double y=static_cast<double >(sqrt(n));
    if(y*y==n)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}