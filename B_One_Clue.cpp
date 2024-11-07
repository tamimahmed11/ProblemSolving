#include<bits/stdc++.h>
using namespace std;
void Tamim() 
{
    int K, X;
    cin >> K >> X;
    for (int x = X-K+1; x <= X+K-1; x++) 
    {
        cout << x << " ";
    }
    cout << endl;
}
int main() 
{
    cout <<fixed <<setprecision(15);
   int t=1;
    while (t--) 
    {
        Tamim();
    }
    return 0;
}