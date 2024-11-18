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
        int AW=a/3;
        int BW=b/3;
        int Ar=a-(AW*3);
        int Br=b-(BW*3);
        int mx=max(Ar,Br);
        cout<<mx<<endl;
    }
    return 0;
}