#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(int n, int k, const vector<int>& A, int x) {
    int changes = 0, minTemp = A[0] - x, maxTemp = A[0] + x;

    for (int i = 1; i < n; ++i) {
        int newMinTemp = max(A[i] - x, minTemp);
        int newMaxTemp = min(A[i] + x, maxTemp);

        if (newMinTemp > newMaxTemp) {
            ++changes;
            minTemp = A[i] - x;
            maxTemp = A[i] + x;
        }

        if (changes > k) return false;
    }
    return true;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, k;
        cin >> n >> k;

        vector<int> A(n);
        for (int i = 0; i < n; ++i) {
            cin >> A[i];
        }

        int left = 0, right = 1e9, answer = 1e9;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (isPossible(n, k, A, mid)) {
                answer = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        cout << answer << '\n';
    }

    return 0;
}
