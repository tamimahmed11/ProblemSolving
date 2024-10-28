#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int>v;
    for (int i = 1;v.size() < n; i++) 
    {
        if (i % 3 == 0 || i % 10 == 3) 
        {
            continue;
        }
        v.push_back(i);
    }
    cout <<v[n-1]<<endl;
}
int main() 
{
    int test;
    cin >> test;
    while (test--) 
    {
        solve();
    }
    return 0;
}
