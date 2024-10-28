#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long n, m, r, c;
        cin >> n >> m >> r >> c;
        long long result=0;
        
        result = (n-r)*m + (n-r+1)*(m-1)-(c-1);
        
        cout << result << endl;
    }
    
    return 0;
}
