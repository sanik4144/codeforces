#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<map<int, string>> v = {
        {{0, "O-|-OOOO"}}, {{1, "O-|O-OOO"}}, {{2, "O-|OO-OO"}}, {{3, "O-|OOO-O"}}, {{4, "O-|OOOO-"}},
        {{5, "-O|-OOOO"}}, {{6, "-O|O-OOO"}}, {{7, "-O|OO-OO"}}, {{8, "-O|OOO-O"}}, {{9, "-O|OOOO-"}}
    };

    int n;
    cin >> n;

    string s = to_string(n);

    for (int i = s.size() - 1; i >= 0; i--) {
        int digit = s[i] - '0'; 

        for (int u = 0; u < 10; u++) {
            if (v[u].find(digit) != v[u].end()) {
                cout << v[u][digit] << endl;
                break;
            }
        }
    }
}
