#include<bits/stdc++.h>
using namespace std;
int FID(const vector<int>& a, int n) 
{
    if (a[0] != a[1]) 
    {
        if (a[0] == a[2]) 
        {
            return 2;
        }
        else
        {
            return 1;
        }
    }
    for (int i = 2; i < n; i++) 
    {
        if (a[i] != a[0]) 
        {
            return i + 1; 
        }
    }
    return -1; 
}

int main() 
{
    int test;
    cin >> test; 
    while (test--) 
    {
        int n;
        cin >> n; 
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i]; 
        }
        cout <<FID(a, n)<<endl;
    }
    return 0;
}
