#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long int maxi = 0, mini = LLONG_MAX, dlt = 0;
        int n;
        cin >> n;
        vector<int> b(n);
        int w = 0;

        for (int i = 0; i < n; i++) {
            long long int a, x;
            cin >> a >> x;

            if (a == 1) {
                maxi = max(x, maxi);
            } else if (a == 2) {
                mini = min(x, mini);
            } else if (a == 3) {
                b[w] = x;
                w++;
            }
        }

        for (auto u : b) {
            if (u >= maxi && u <= mini)
                dlt++;
        }

        long long int ans = 0;
        if (maxi > mini)
            ans = 0;
        else
            ans = ((mini - maxi) + 1) - dlt;

        cout << ans << endl;
    }

    return 0;
}
