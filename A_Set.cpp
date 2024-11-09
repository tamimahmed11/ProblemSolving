#include<bits/stdc++.h>
using namespace std;
int tamim(int x, int l, int r) 
{
    int ans = 0;
    for (int i = l; i <= r; i++)
    {
        if (i % x == 0) 
        {
          ans++;
        }
    }
    return ans;
}
void solve()
{
      int test;
    cin >> test; 
    while (test--) 
    {
        int l, r, k,cnt;
        cin >> l >> r >> k; 
         cnt = 0;
        for (int x = l; x <= r; ++x) {
            int gun =tamim(x, l, r);
            if (gun >= k) 
            { 
                cnt++;
            }
        }
        cout <<cnt<< endl;
    }
}
int main() 
{
  solve();
    return 0;
}
