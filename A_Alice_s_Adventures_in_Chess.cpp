#include <iostream>
#include <string>
#include <set>
using namespace std;

bool willMeetRedQueen(int n, int a, int b, const string &s) {
    int x = 0, y = 0; // Starting position of Alice
    set<pair<int, int>> visited_positions; // Track visited positions to avoid infinite loops
    visited_positions.insert({x, y});

    for (int i = 0; i < n * 10; ++i) { // Repeat the pattern up to n*10 moves
        // Determine current move in the pattern
        char move = s[i % n];

        // Update Alice's position based on the move
        if (move == 'N') y += 1;
        else if (move == 'S') y -= 1;
        else if (move == 'E') x += 1;
        else if (move == 'W') x -= 1;

        // Check if Alice meets the Red Queen
        if (x == a && y == b) {
            return true;
        }

        // If we revisit the same position with the same remainder in the pattern, it forms a loop
        if (visited_positions.count({x, y}) && i >= n) {
            break;
        }
        visited_positions.insert({x, y});
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
