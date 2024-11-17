#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t; 
    cin >> t;
    while (t--) 
    {
        int a, b,c;
        cin >> c>> a >> b;
        int ans = 0;
        if (2*a<=b) 
        {
            ans= c*a;
        } 
        else 
        {
            ans=(c/2)*b +(c%2)*a;
        }
        cout <<ans<< endl;
    }
    return 0;
}

