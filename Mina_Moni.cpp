#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>
using namespace std;

int minDifference(vector<int>& coins, int N) {
    int totalSum = accumulate(coins.begin(), coins.end(), 0);
    int halfSum = totalSum / 2;
    
    // DP table to store if a particular sum is possible with a subset of coins
    vector<bool> dp(halfSum + 1, false);
    dp[0] = true;  // We can always form 0 sum
    
    // Process each coin
    for (int i = 0; i < N; ++i) {
        // Traverse the dp array backwards to avoid using the same coin twice
        for (int j = halfSum; j >= coins[i]; --j) {
            dp[j] = dp[j] || dp[j - coins[i]];
        }
    }
    
    // Find the largest value `s` <= halfSum for which dp[s] is true
    int s = 0;
    for (int i = halfSum; i >= 0; --i) {
        if (dp[i]) {
            s = i;
            break;
        }
    }
    
    // The minimum difference between the two subsets
    return abs(totalSum - 2 * s);
}

int main() {
    int T;
    cin >> T;  // Number of test cases
    
    while (T--) {
        int N;
        cin >> N;  // Number of coins
        vector<int> coins(N);
        
        // Input coin values
        for (int i = 0; i < N; ++i) {
            cin >> coins[i];
        }
        
        // Output the minimum difference for each test case
        cout << minDifference(coins, N) << endl;
    }
    
    return 0;
}
