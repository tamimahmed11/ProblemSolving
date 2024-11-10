#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int h, mintus,mints,ls,ans;
        cin >> h >> mintus;
         mints = 1440;
         ls = h * 60 + mintus;
         ans = mints-ls;
        cout <<ans<< endl;
    }
    return 0;
}
