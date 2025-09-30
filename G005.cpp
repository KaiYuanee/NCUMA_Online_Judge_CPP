#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, x = 0, y = 0, win_time = 0;
    cin >> n;
    vector<int> enemys(n), teammates(n);
    for (int i = 0; i < n; i++) {
        cin >> enemys[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> teammates[i];
    }
    sort(enemys.begin(), enemys.end());
    sort(teammates.begin(), teammates.end());
    while ((x < n) && (y < n)) {
        if (enemys[x] < teammates[y]) {
            win_time++;
            x++;
            y++;
        }
        else {
            y++;
        }
    }
    cout << win_time << endl;
    return 0;
}
