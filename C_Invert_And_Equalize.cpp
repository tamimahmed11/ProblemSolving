#include <iostream>
#include <string>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;
    while (T--) {
        int N; // Length of the binary string
        cin >> N;
        string S;
        cin >> S;

        // Count the number of segments
        int segments = 1; // At least one segment exists
        for (int i = 1; i < N; ++i) {
            if (S[i] != S[i - 1]) {
                ++segments;
            }
        }

        // The minimum number of operations is (segments + 1) / 2
        cout << (segments + 1) / 2 << endl;
    }
    return 0;
}
