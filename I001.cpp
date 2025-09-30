#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> fib_vec(n + 1);
    fib_vec[0] = 0, fib_vec[1] = 1;
    for (int i = 2; i < n + 1; i++) {
        fib_vec[i] = (fib_vec[i - 2] + fib_vec[i - 1]) % 10000;
    }
    cout << fib_vec[n] << endl;
    return 0;
}
