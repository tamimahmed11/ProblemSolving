#include <bits/stdc++.h>
using namespace std;
int main() 
{
   int n, m;
   cin >> n >> m;
   vector<int> a(n + 1), cnt(n + 1);
   for (int i = 1;i <= n;i++)
    {
      cin >> a[i];
   }
   set<int> st;
   for (int i = n;i >= 1;i--) 
   {
      st.insert(a[i]);
      cnt[i] = st.size();
   }
   for (int i = 1;i <= m;i++) 
   {
      int pos;
      cin >> pos;
      cout << cnt[pos] << '\n';
   }
   return 0;
}