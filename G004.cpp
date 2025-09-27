#include <iostream>

using namespace std;

string removeLeadingZeros(string s) {
    int i = 0;
    while (s[i] == '0') {
        i++;
    }
    if (i == s.size()) {
        return "0";
    }
    else {
        return s.substr(i);
    }
}

int main() {
    int n, k;
    string num_str, result;
    cin >> n >> k >> num_str;
    result.push_back(num_str[0]);
    for (int i = 1; i < n; i++) {
        while (!result.empty() && k > 0 && num_str[i] < result[result.size() - 1]) {
            result.pop_back();
            k--;
        }
        result.push_back(num_str[i]);
    }
    while (k > 0) {
        result.pop_back();
        k--;
    }
    cout << removeLeadingZeros(result) << endl;
    return 0;
}