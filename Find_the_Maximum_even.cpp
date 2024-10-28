#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to find the target book code using binary search
int findBookIndex(const vector<int>& books, int target) {
    int low = 0;
    int high = books.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (books[mid] == target) {
            return mid;  // Book found at index mid
        } else if (books[mid] < target) {
            low = mid + 1;  // Search in the right half
        } else {
            high = mid - 1;  // Search in the left half
        }
    }

    return -1;  // Book not found
}

int main() {
    int n;
    cin >> n;

    vector<int> books(n);
    
    // Input the sorted array of book codes
    for (int i = 0; i < n; i++) {
        cin >> books[i];
    }

    // Input the target book code
    int target;
    cin >> target;

    // Find and output the index of the target book code
    int result = findBookIndex(books, target);

    cout << result << endl;

    return 0;
}
