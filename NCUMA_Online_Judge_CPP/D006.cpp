#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<pair<string, int>> student_list = {{"Hipp0", 98}, {"Ccshiao", 100}, {"Ama", 0}};
    int N, score;
    string oprt, name;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> oprt;
        if (oprt == "del") {
            cin >> name;
            for (int i = 0; i < student_list.size(); i++) {
                if (student_list[i].first == name) {
                    student_list.erase(student_list.begin() + i);
                    break;
                }
            }
        }
        if (oprt == "add") {
            cin >> name >> score;
            student_list.push_back(make_pair(name, score));
        }
        if (oprt == "mean") {
            int score_sum = 0;
            for (pair<string, int> student : student_list) {
                score_sum += student.second;
            }
            cout << score_sum / student_list.size() << endl;
        }
    }
    return 0;
}