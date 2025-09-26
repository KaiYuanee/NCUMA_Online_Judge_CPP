#include <iostream>
#include <algorithm>

using namespace std;

int sum_int(int a, int b) {
    return a + b;
}

string sum_string(string a, string b) {
    string result = a + b;
    reverse(result.begin(),result.end());
    return result;
}

int main() {
    int a, b;
    string s1, s2;
    cin >> a >> b;
    cin >> s1 >> s2;
    cout << sum_int(a, b) << endl << sum_string(s1, s2);
    return 0;
}