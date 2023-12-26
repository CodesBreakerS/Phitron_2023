#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;    typedef pair<long,long>pll;
typedef vector<pii>vpii;     typedef vector<pll>vpll;
typedef vector<int>vi;       typedef vector<string>vs;   typedef vector<bool>vb;


class NQueens {
private:
    int boardSize;
    int solutionsCount;
    vector<int> queensPositions;

public:
    NQueens(int size) : boardSize(size), solutionsCount(0), queensPositions(size, -1) {}

    void solve() {
        solveNQueens(0);
    }

    int countSolutions() const {
        return solutionsCount;
    }

private:
    void solveNQueens(int row) {
        if (row == boardSize) {
            // Found a solution
            solutionsCount++;
            // Optionally, you can print or process the solution here
            return;
        }

        for (int col = 0; col < boardSize; col++) {
            if (isSafe(row, col)) {
                // Place the queen
                queensPositions[row] = col;

                // Recur for the next row
                solveNQueens(row + 1);

                // Backtrack: remove the queen to explore other possibilities
                queensPositions[row] = -1;
            }
        }
    }

    bool isSafe(int row, int col) const {
        // Check if no queens threaten each other in the current position

        // Check in the same column
        for (int i = 0; i < row; i++) {
            if (queensPositions[i] == col || queensPositions[i] - i == col - row || queensPositions[i] + i == col + row) {
                return false;
            }
        }

        return true;
    }
};

int main() {
    int n;

    cout << "Enter the size of the chessboard (N): ";
    cin >> n;

    NQueens nQueensSolver(n);
    nQueensSolver.solve();

    cout << "Number of solution is" << n << ": " << nQueensSolver.countSolutions() << endl;

    return 0;
}