#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> x(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    int ans = INT_MAX;

    for (int i = 0; i < n - 1; i++) {
        if (s[i] == 'R' && s[i + 1] == 'L') {
            int time = (x[i + 1] - x[i]) / 2;
            ans = min(ans, time);
        }
    }

    if (ans == INT_MAX) cout << -1;
    else cout << ans;

    return 0;
}