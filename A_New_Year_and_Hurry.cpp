#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n, m;
    cin >> n >> m;
    int tm = (4*60)-m;  
    int ts = 0;       
    int ans = 0;

    for (int i =1;i<=n;i++) 
    {
        ts=ts+ 5*i; 
        if (ts <=tm) 
        {
            ans++;
        } 
        else 
        {
            break;
        }
    }
    cout <<ans<< endl;
    return 0;
}
