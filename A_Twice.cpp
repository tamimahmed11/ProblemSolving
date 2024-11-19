#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t; 
    while (t--) 
    {
        int x;
        cin >> x; 
        vector<int> v(x);
        map<int, int>m1; 
        for (int i = 0; i <x;i++) 
        {
            cin >> v[i];
            m1[v[i]]++;
        }
        int ans = 0;
        for (const auto& pair:m1) 
        {
            ans=ans+pair.second / 2; 
        }
        cout <<ans<< endl;
    }
    return 0;
}
