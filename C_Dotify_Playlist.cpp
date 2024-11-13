#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int Test;
    cin >> Test;
    while (Test--) 
    {
        int n,k,l;
        cin>>n>>k>>l;
        vector<int>v;
        for (int i = 0; i <n; ++i) 
        {
            int m, L1;
            cin >>m>> L1;
        
            if (L1== l) 
            {
                v.push_back(m);
            }
        }
        if (v.size() < k)
         {
            cout << -1 << endl;
            continue;
        }
        sort(v.rbegin(),v.rend());
        int ans= 0;
        for (int i = 0; i <k; ++i) 
        {
            ans += v[i];
        }
        cout << ans << endl;
    }
    return 0;
}
