#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases
    
    while (t--) {
        int n;
        cin >> n;  // Size of the matrix
        
        vector<vector<int>> a(n, vector<int>(n));
        
        // Read the matrix
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> a[i][j];
            }
        }
        
        int operations = 0;
        
        // Process the matrix from bottom-right to top-left
        for (int i = n - 1; i >= 0; --i) {
            for (int j = n - 1; j >= 0; --j) {
                if (a[i][j] < 0) {
                    int needed = abs(a[i][j]);
                    operations += needed;
                    
                    // Apply the operation on the diagonal
                    for (int k = 0; k < n && i + k < n && j + k < n; ++k) {
                        a[i + k][j + k] += needed;
                    }
                }
            }
        }
        
        // Output the result for the current test case
        cout << operations << endl;
    }

    return 0;
}
