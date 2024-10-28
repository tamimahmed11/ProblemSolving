#include <iostream>
using namespace std;
void solve()
{
     int test;
    cin >> test;
    while (test--) 
    {
        int x,n;
        cin >> x;
        if (360 % (180 - x)==0) 
        {
           int  n = 360 / (180 - x);
            if (n>=3)
            {
                cout << "YES"<<endl;
            }
                
            else
            {
                cout <<"NO"<<endl;
            }    
        } 
        else 
        {
            cout << "NO"<< endl;
        }
    }
}
int main() 
{
    solve();
    return 0;
}
