#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compareWork(pair<int, int> work1, pair<int, int> work2) {
    return work1.second < work2.second;
}

int main() {
    int n, start, end, result = 0, current_time = -1;
    cin >> n;
    vector<pair<int, int>> work_list(n);
    for (int i = 0; i < n; i++) {
        cin >> start >> end;
        work_list[i].first = start;
        work_list[i].second = end;
    }
    sort(work_list.begin(), work_list.end(), compareWork);
    for (int i = 0; i < n; i++) {
        if (work_list[i].first >= current_time) {
            result++;
            current_time = work_list[i].second;
        }
    }
    cout << result << endl;
    return 0;
}