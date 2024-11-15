#include<bits/stdc++.h>
using namespace std;
int main()
 {
    int Test;
    cin >> Test;
    while (Test--) {
        int N;
        cin >> N;
        vector<int> v1(N), v2(N);
        for (int i = 0; i < N; i++)
         cin >> v1[i];
        for (int i = 0; i < N; i++) 
        cin >> v2[i];
        vector<int> v3;
        v3.insert(v3.end(), v1.begin(), v1.end());
        v3.insert(v3.end(), v2.begin(), v2.end());
        sort(v3.begin(), v3.end());
        int diff = INT_MAX;
        for (int i = 0; i <= v3.size() - N; i++) 
        {
            int ans = v3[i + N - 1] -v3[i];
            diff = min(diff, ans);
        }
        cout <<diff<< "\n";
    }
    return 0;
}
