#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int k;
        cin >> k; // Total number of integers in the input
        vector<int> a(k);
        unordered_set<int> elements;

        // Read the array
        for (int i = 0; i < k; ++i) {
            cin >> a[i];
            elements.insert(a[i]); // Store each element in a hash set for quick lookup
        }

        int n = 0, m = 0;
        for (int x : a) {
            if (x != 0 && k % x == 0) { // Check if x divides k
                int y = k / x; // Calculate the other factor
                if (elements.count(y)) { // Check if the other factor exists in the array
                    n = x;
                    m = y;
                    break; // Found the pair, exit the loop
                }
            }
        }

        cout << n << " " << m << endl; // Output the pair (n, m)
    }

    return 0;
}
