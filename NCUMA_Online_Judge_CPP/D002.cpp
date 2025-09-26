#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, palm_power, ass_power;
    string name;
    cin >> n >> palm_power;
    vector<pair<string, int>> players(n);
    for (int i = 0; i < n; i++) {
        cin >> name >> ass_power;
        players[i] = make_pair(name, ass_power);
    }
    vector<pair<string, int>> winners;
    for (int i = n - 1; i >= 0; i--) {
        if (palm_power >= players[i].second) {
            players.pop_back();
        } else {
            break;
        }
    }
    if (players.size() == 0) {
        cout << "恭喜打完所有屁屁" << endl;
    }
    else {
        for (pair<string, int> p : players) {
            cout << p.first << endl;
        }
        cout << "菜就多練" << endl;
    }
    return 0;
}
