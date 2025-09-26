#include <iostream>
#include <queue>

using namespace std;

int main() {
    int N, K, score;
    queue<int> scores;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> K;
        if (K == 1) {
            cin >> score;
            scores.push(score);
        }
        if (K == 2) {
            if (scores.size() == 0) {
                cout << -1 << endl;
            }
            else {
                cout << scores.front() << endl;
            }
        }
        if (K == 3) {
            if (scores.size() > 0) {
                scores.pop();
            }
        }
        if (K == 4) {
            if (scores.size() == 0) {
                cout << -2 << endl;
            }
            else {
                cout << scores.back() << endl;
            }
        }
    }
    return 0;
}
