#include <iostream>

using namespace std;

int main() {
    int N;
    string S, fish = "fish", happy = "happy";
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> S;
        for (int j = 0; j < S.size(); j++) {
            if ((S[j] >= 'A') && (S[j] <= 'Z')) {
                S[j] += 32;
            }
        }
        int fish_pointer = 0;
        for (char c : S) {
            if (c == fish[fish_pointer]) {
                fish_pointer++;
            }
        }
        if (fish_pointer == 4) {
            int happy_pointer = 0;
            for (char c : S) {
                if (c == happy[happy_pointer]) {
                    happy_pointer++;
                }
            }
            if (happy_pointer == 5) {
                cout << "happy" << endl;
            }
            else {
                cout << "nothappy" << endl;
            }
        }
        else {
            cout << "notfish" << endl;
        }
    }
    return 0;
}