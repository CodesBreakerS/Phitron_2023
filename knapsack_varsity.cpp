#include <iostream>
using namespace std;

int w[100], v[100];
int n, W;

int max(int x, int y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}

int knapsack() {
    int i, k;
    int knap[101][101];

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= W; j++) {
            if (i == 0 || j == 0) {
                knap[i][j] = 0;
            } else if (w[i - 1] <= j) {
                knap[i][j] = max(v[i - 1] + knap[i - 1][j - w[i - 1]], knap[i - 1][j]);
            } else {
                knap[i][j] = knap[i - 1][j];
            }
        }
    }
    return knap[n][W];
}

int main() {
    cout << "Enter the number of inputs: ";
    cin >> n;

    cout << "Enter the items:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << "Weights:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> w[i];
    }

    cout << "Max weight:";
    cin >> W;
    cout << "Output wusing 0/1 knapsack " << knapsack() << endl;
    return 0;
}
