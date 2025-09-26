#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int j = n - 1; j >= 0; j--) {
        for (int i = 0; i < n - 1; i++) {
            cout << matrix[i][j] << ' ';
        }
        cout << matrix[n - 1][j] << endl;
    }
    return 0;
}