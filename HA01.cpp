#include <iostream>

using namespace std;

int main() {
    int H1, H2, H3, H4;
    cin >> H1 >> H2 >> H3 >> H4;
    if ((H2 - H1 == H3 - H2) && (H3 - H2 == H4 - H3)) {
        cout << H4 + H2 - H1 << endl;
    }
    else if ((H2 * H2 == H1 * H3) && (H3 * H3 == H2 * H4)) {
        cout << H4 * H2 / H1 << endl;
    }
    else {
        cout << "關羽快樂嗎" << endl;
    }
    return 0;
}