#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, q, A, B;
    cin >> n;
    vector<int> num_vec(n);
    for (int i = 0; i < n; i++) {
        cin >> num_vec[i];
    }
    if (n == 1) {
        cout << num_vec[0] << endl;
    }
    else {
        cout << num_vec[0] << " ";
        for (int i = 1; i < n - 1; i++) {
            num_vec[i] = num_vec[i - 1] + num_vec[i];
            cout << num_vec[i] << " ";
        }
        num_vec[n - 1] = num_vec[n - 2] + num_vec[n - 1];
        cout << num_vec[n - 1] << endl;
    }
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> A >> B;
        int left, right = num_vec[B - 1];
        if (A == 1) {
            left = 0;
        }
        else {
            left = num_vec[A - 2];
        }
        if ((right - left) % 2) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}