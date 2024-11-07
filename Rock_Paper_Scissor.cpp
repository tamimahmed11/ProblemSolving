#include<bits/stdc++.h>
using namespace std;
void solve()
{
      int t;
    cin >>t;
    while (t--) 
    {
        int n;
        cin >> n;
        string x,y;
        cin >>x>>y;
        int r1 = 0;
        int r2 = 0;
        for (int i = 0; i < n; i++)
         {
            if (x[i] == y[i]) 
            {
                continue;;
            }
            else if ((x[i] == 'R' && y[i] == 'S') ||(x[i] == 'S' && y[i] == 'P') ||(x[i] == 'P' && y[i] == 'R')) 
            {
                r1++;
            }
             else 
            {  
              r2++;
            }
        }
        if (r1> r2) 
        {
            cout << 0 << endl;
            continue;
        }
        int result= ((r2-r1) / 2) + 1;
        cout << result<< endl;
    }
}
int main()
 {
  solve();
    return 0;
}
