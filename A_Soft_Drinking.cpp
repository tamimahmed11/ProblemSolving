#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int t, k, l, c, d, p,Null,product;
    cin >>t>> k >> l >> c >> d >> p >>Null>>product;
    int dr,kata,lobon,drinnk,t_kata,t_lobon,ans;
     dr = k * l;
     kata = c * d;
     lobon = p;
     drinnk =dr/Null;
     t_kata =kata;
     t_lobon= lobon/product;
     ans = min({drinnk, t_kata,t_lobon}) /t;
    cout << ans <<endl;
}
int main() 
{
    solve();
    return 0;
}
