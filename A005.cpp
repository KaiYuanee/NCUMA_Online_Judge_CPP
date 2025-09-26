#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<int, int> num_map;
    int num, sum = 0;
    for (int i = 0; i < 21; i++) {
        cin >> num;
        if (num_map[num] == 0) {
            num_map[num] += 1;
            sum += num;
        }
        else {
            num_map[num] -= 1;
            sum -= num;
        }
    }
    cout << sum << endl;
    return 0;
}