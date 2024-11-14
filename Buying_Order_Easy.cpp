#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int Test;
    cin >> Test;
    while (Test--) 
    {
        int n;
        cin >>n;
        vector<int> v0(n);
        for (int i = 0; i < n;i++)
        {
            cin >> v0[i];
        }
        vector<int>v1,v2;
        for (int i = 1; i <= n;i++) 
        {
            if (v0[i - 1] == 1) 
            {
                v1.push_back(i);
            }
            else
            {
                v2.push_back(i);
            }
        }
        sort(v1.rbegin(), v1.rend());
        int ans = v1.size() + v2.size(); 
        ans= ans+ max(0, (int)v1.size() - 1) + max(0, (int)v2.size() - 1);
        cout <<ans<< endl;
    }
    return 0;
}
