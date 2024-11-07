#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b;
    cin>>a>>b;
    int sum=(a+b);
    int sub=(a-b);
    int mul=(a*b);

    int boroValue=max({sum,sub,mul});
    cout<<boroValue<<endl;
    return 0;

}