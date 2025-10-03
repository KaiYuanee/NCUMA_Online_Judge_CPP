#include <iostream>
#include <vector>

using namespace std;

int LCS(string str1, string str2) {
    int str1_len = str1.length();
    int str2_len = str2.length();
    vector<vector<int>> len_vec(str1_len + 1, vector<int>(str2_len + 1, 0));
    for (int i = 1; i <= str1_len; i++) {
        for (int j = 1; j <= str2_len; j++) {
            if (str1[i - 1] == str2[j - 1]) {
                len_vec[i][j] = len_vec[i - 1][j - 1] + 1;
            }
            else {
                len_vec[i][j] = max(len_vec[i - 1][j], len_vec[i][j - 1]);
            }
        }
    }
    return len_vec[str1_len][str2_len];
}

int main() {
    string S1, S2;
    cin >> S1 >> S2;
    cout << LCS(S1, S2) << endl;
    return 0;
}
