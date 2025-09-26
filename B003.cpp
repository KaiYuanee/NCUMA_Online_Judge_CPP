#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, coeff, t;
    vector<int> coeff_vec;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> coeff;
        coeff_vec.push_back(coeff);
    }
    cin >> t;
    for (int i = 0; i < t; i++) {
        int x, sum = 0;
        cin >> x;
        for (int j = 0; j < coeff_vec.size(); j++) {
            int product = coeff_vec[j];
            for (int k = 0; k < j; k++) {
                product *= x;
            }
            sum += product;
        }
        cout << sum << endl;
    }
    return 0;
}