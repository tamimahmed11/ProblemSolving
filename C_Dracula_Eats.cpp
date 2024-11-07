#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int thu=n/7;
        if(n%7>=2)
        {
            thu=thu+1;
        }
        cout<<thu<<endl;
    }
    return 0;
}
