#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        long long N;
        string is_prime = "YES";
        cin >> N;
        for (long long j = 2; j <= sqrt(N); j++) {
            if (N % j == 0) {
                is_prime = "NO";
                break;
            }
        }
        cout << is_prime << endl;
    }
    return 0;
}