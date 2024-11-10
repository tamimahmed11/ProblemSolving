#include <iostream>
using namespace std;

int min_operations(int n, int k) {
    int operations = 0;
    while (n > 0) {
        operations += n % k;  // Count the remainder (which is the number of subtractions needed at this power)
        n /= k;               // Move to the next higher power of k
    }
    return operations;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        cout << min_operations(n, k) << endl;
    }
    return 0;
}
