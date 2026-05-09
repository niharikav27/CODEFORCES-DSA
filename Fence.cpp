#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> h(n);

    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    long long sum = 0;

    for (int i = 0; i < k; i++) {
        sum += h[i];
    }

    long long mini = sum;
    int ans = 1;

    for (int i = k; i < n; i++) {
        sum += h[i];
        sum -= h[i - k];

        if (sum < mini) {
            mini = sum;
            ans = i - k + 2;
        }
    }

    cout << ans;
}