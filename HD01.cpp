#include <iostream>
#include <vector>
#include <tuple>

using namespace std;

int main() {
    int N, BMI;
    string name, result;
    double weight, height;
    vector<tuple<string, int, int>> result_list = {{"輕", -2147483648, 19}, {"中", 19, 24}, {"重", 24, 27}, {"肥胖", 27, 2147483647}};
    cin >> N;
    vector<tuple<string, double, double, int>> target_list(N);
    for (int i = 0; i < N; i++) {
        cin >> name >> weight >> height;
        BMI = weight * 10000 / (height * height);
        target_list[i] = make_tuple(name, weight, height, BMI);
    }
    cin >> result;
    for (tuple<string, int, int> t : result_list) {
        if (result == get<0>(t)) {
            for (tuple<string, int, int, int> u : target_list) {
                if ((get<3>(u) >= get<1>(t)) && (get<3>(u) < get<2>(t))) {
                    cout << get<0>(u) << ' ' << get<3>(u) << endl;
                }
            }
        }
    }
    return 0;
}
