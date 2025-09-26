#include <iostream>
#include <sstream>
#include <stack>

using namespace std;

int main() {
    string s;
    char c;
    stack<int> num_stack;
    int num1, num2, result;
    getline(cin, s);
    stringstream ss(s);
    while (ss >> c) {
        if (isdigit(c)) {
            num_stack.push(c - '0');
        }
        else {
            num1 = num_stack.top();
            num_stack.pop();
            num2 = num_stack.top();
            num_stack.pop();
            if (c == '+') {
                result = num1 + num2;
            }
            if (c == '-') {
                result = num2 - num1;
            }
            if (c == '*') {
                result = num1 * num2;
            }
            if (c == '/') {
                result = num2 / num1;
            }
            num_stack.push(result);
        }
    }
    cout << result << endl;
    return 0;
}
