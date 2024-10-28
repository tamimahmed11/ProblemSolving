#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        double a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a/b==c/d)
        {
            cout<<"Equal\n";
        }
        else
        {
            cout<<"Not Equal\n";
        }
    }
    return 0;
}
