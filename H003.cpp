#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findIndexByBS(vector<int> nums, int target) {
    int left = 0, right = nums.size() - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (nums[mid] == target) {
            return mid;
        }
        else if (nums[mid] > target){
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }
    return -1;
}

int main() {
    int n, num, q, x;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> num;
        nums[i] = num;
    }
    sort(nums.begin(), nums.end());
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> x;
        if (findIndexByBS(nums, x) == -1) {
            cout << "not find" << endl;
        }
        else {
            cout << findIndexByBS(nums, x) << endl;
        }
    }
    return 0;
}