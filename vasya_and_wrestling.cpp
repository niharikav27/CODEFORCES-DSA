#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> v1, v2;
    long long sum1 = 0, sum2 = 0;
    int last;

    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;

        if (x > 0) {
            v1.push_back(x);
            sum1 += x;
            last = 1;
        } else {
            v2.push_back(-x);
            sum2 += -x;
            last = 2;
        }
    }

    if (sum1 > sum2) {
        cout << "first\n";
    } else if (sum2 > sum1) {
        cout << "second\n";
    } else {
        if (v1 > v2) {
            cout << "first\n";
        } else if (v2 > v1) {
            cout << "second\n";
        } else {
            if (last == 1) cout << "first\n";
            else cout << "second\n";
        }
    }
}