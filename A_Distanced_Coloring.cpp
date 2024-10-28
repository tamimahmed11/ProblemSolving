#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;

        int row=(n+k-1)/k;
        int cols=(m+k-1)/k;
        cout<<row*cols<<endl;
    }
}