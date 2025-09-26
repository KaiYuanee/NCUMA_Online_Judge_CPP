#include <iostream>

using namespace std;

int main() {
    string S;
    getline(cin, S);
    for (char c : S) {
        if ((c >= 'A') && (c <= 'Z')) {
            cout << (char)(c + 32);
        }
        else if ((c >= 'a') && (c <= 'z')) {
            cout << (char)(c - 32);
        }
        else {
            cout << c;
        }
    }
    return 0;
}