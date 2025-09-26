#include <iostream>

using namespace std;

int main() {
    string S;
    double H, W;
    for (int i = 0; i < 2; i++) {
        cin >> S >> H >> W;
        double BMI = W / (H * H) * 10000;
        string condition;
        if (BMI < 19) {
            condition = "過輕";
        }
        else if ((BMI >= 19) && (BMI < 24)) {
            condition = "正常";
        }
        else if ((BMI >= 24) && (BMI < 27)) {
            condition = "過重";
        }
        else if ((BMI >= 27) && (BMI < 30)) {
            condition = "輕度肥胖";
        }
        else if ((BMI >= 30) && (BMI < 35)) {
            condition = "中度肥胖";
        }
        else {
            condition = "重度肥胖";
        }
        cout << S << "的身體狀況為" << condition << endl;
    }
    return 0;
}