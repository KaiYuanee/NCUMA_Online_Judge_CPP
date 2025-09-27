#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>

using namespace std;

bool compare(const tuple<string, int, int>& t1, const tuple<string, int, int>& t2) {
    if (get<1>(t1) != get<1>(t2)) {
        return get<1>(t1) > get<1>(t2);
    }
    else {
        if (get<2>(t1) != get<2>(t2)) {
            return get<2>(t1) < get<2>(t2);
        } 
        else {
            return get<0>(t1) < get<0>(t2);
        }
    }
}

int main() {
    int n, math_score, chinese_score;
    string name;
    cin >> n;
    vector<tuple<string, int, int>> players(n);
    for (int i = 0; i < n; i++) {
        cin >> name >> math_score >> chinese_score;
        players[i] = make_tuple(name, math_score, chinese_score);
    }
    sort(players.begin(), players.end(), compare);
    for (tuple<string, int, int> player : players) {
        cout << get<0>(player) << " " << get<1>(player) << " " << get<2>(player) << endl;
    }
    return 0;
}