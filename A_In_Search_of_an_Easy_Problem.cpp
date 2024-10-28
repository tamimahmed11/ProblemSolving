// https://codeforces.com/problemset/problem/1030/A
#include<bits/stdc++.h>
using namespace std;
int Tamim()
{
     int n;
    cin>>n;
    bool esayhard=true;
    for(int i=0;i<n;i++)
    {
        int op;
        cin>>op;
        if(op==1)
        {
            esayhard=false;
        }
    }
    if(esayhard)
    {
        cout<<"EASY"<<endl;
    }
    else
    {
        cout<<"HARD"<<endl;
    }
}
int main()
{
   Tamim();
   return 0;
}