#include<bits/stdc++.h>

using namespace std;

int tamim(string s, string t) 
{
    int len_s = s.length();
    int len_t = t.length();

    int len_common_suffix = 0;
    while (len_common_suffix < len_s && len_common_suffix < len_t &&
           s[len_s - 1 - len_common_suffix] == t[len_t - 1 - len_common_suffix]) 
    {
        len_common_suffix++;
    }

    return (len_s - len_common_suffix) + (len_t - len_common_suffix);
}

int main()
 {
    string s, t;
    cin >> s >> t;
    
    int result =tamim(s, t);
    cout << result << endl;
    
    return 0;
}
