
#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases

    while (T--) {
        int N, X, Y;
        cin >> N >> X >> Y;

        // Maximum number of type 2 sessions we can take
        int maxType2Sessions = N / 2;
        
        // Calculate earnings by taking as many type 2 sessions as possible
        int earnings = maxType2Sessions * Y + (N - 2 * maxType2Sessions) * X;

        cout << earnings << endl;
    }

    return 0;
}
