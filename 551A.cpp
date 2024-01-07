#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }

    sort(a, a + n, greater<int>());

    vector<pair<int, int>> p;
    int x = 1;

    for (int i = 0; i < n; i++) {
        if (a[i] != a[i + 1]) {
            p.push_back({a[i], x});
            x = i + 2;
        } else {
            p.push_back({a[i], x});
        }
    }

    for (int i = 0; i < n; i++) {
        for(int j=0; j<n; j++){
          if(b[i]==p[j].first){
            cout<<p[j].second<<" ";
            break;
          }
        }
    }
}