#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;

        int x = 0, y = 0;
        unordered_set<string> visited;
        visited.insert("0,0");
        
        bool found = false;

        for (int i = 0; i < n && !found; ++i) {
            if (s[i] == 'N') y++;
            else if (s[i] == 'S') y--;
            else if (s[i] == 'E') x++;
            else if (s[i] == 'W') x--;

            if (x == a && y == b) {
                found = true;
            }

            visited.insert(to_string(x) + "," + to_string(y));
        }

        cout << (found ? "YES" : "NO") << endl;
    }

    return 0;
}
