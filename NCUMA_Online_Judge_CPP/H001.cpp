#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, num;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> num;
        nums[i] = num;
    }
    sort(nums.begin(), nums.end(), greater<int>());
    for (int i = 0; i < n - 1; i++) {
        cout << nums[i] << " ";
    }
    cout << nums[n - 1];
    return 0;
}