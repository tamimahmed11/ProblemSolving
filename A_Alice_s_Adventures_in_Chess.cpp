#include <iostream>
#include <string>
using namespace std;

bool willMeetRedQueen(int n, int a, int b, const string& s) {
    int x = 0, y = 0;

    for (int i = 0; i < 100; ++i) { // Simulate enough steps (n * 10 is enough as n ≤ 10)
        for (char move : s) {
            if (move == 'N') ++y;
            else if (move == 'E') ++x;
            else if (move == 'S') --y;
            else if (move == 'W') --x;

            if (x == a && y == b) return true;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;

        if (willMeetRedQueen(n, a, b, s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
