#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string r="Timur";
    sort(r.begin(),r.end());
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n!=5)
        {
            cout<<"NO"<<endl;
            continue;

        }
        sort(s.begin(),s.end());
        if(s==r)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}