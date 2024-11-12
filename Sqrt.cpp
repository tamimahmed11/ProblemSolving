#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long y=static_cast<long long>(sqrt(n));
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