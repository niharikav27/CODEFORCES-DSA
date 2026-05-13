#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long d;
    cin >> n >> d;

    vector<pair<long long, long long>> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end());

    long long sum = 0;
    long long ans = 0;

    int l = 0;

    for (int r = 0; r < n; r++) {

        sum += v[r].second;

        while (v[r].first - v[l].first >= d) {
            sum -= v[l].second;
            l++;
        }

        ans = max(ans, sum);
    }

    cout << ans << endl;
}