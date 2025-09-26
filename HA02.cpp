#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        string binary_num;
        cin >> n;
        while (n != 0) {
            int digit = n % 2;
            binary_num += (char)(digit + 48);
            n /= 2;
        }
        reverse(binary_num.begin(), binary_num.end());
        cout << binary_num << endl;
    }
    return 0;
}