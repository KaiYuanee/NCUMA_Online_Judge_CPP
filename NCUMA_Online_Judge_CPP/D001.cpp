#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K, a, b;
    cin >> N >> K;
    vector<vector<int>> friend_list(N, vector<int>(0));
    for (int i = 0; i < K; i++) {
        cin >> a >> b;
        friend_list[a - 1].push_back(b);
        friend_list[b - 1].push_back(a);
    }
    for (int i = 0; i < N; i++) {
        sort(friend_list[i].begin(), friend_list[i].end());
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < friend_list[i].size() - 1; j++) {
            cout << friend_list[i][j] << " ";
        }
        cout << friend_list[i][friend_list[i].size() - 1] << endl;
    }
    return 0;
}
