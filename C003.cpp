#include <iostream>

using namespace std;

int gcd(int num1, int num2) {
    if (num1 < num2) {
        swap(num1, num2);
    }
    if (num2 == 0) {
        return num1;
    }
    return gcd(num2, num1 % num2);
}

int main() {
    int n, a, b;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        cout << gcd(a, b) << endl;
    }
    return 0;
}
