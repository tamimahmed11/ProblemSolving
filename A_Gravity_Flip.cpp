#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>cubic(n);
    for(int i=0;i<n;i++)
    {
        cin>>cubic[i];
    }
    sort(cubic.begin(),cubic.end());
    for(int i=0;i<n;i++)
    {
        cout<<cubic[i]<<" ";
    }
    cout<<endl;
    return 0;
}