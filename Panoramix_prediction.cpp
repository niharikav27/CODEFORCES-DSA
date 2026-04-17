#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = n + 1; i <= 50; i++) {
        bool isPrime = true;

        if (i < 2) isPrime = false;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            if (i == m) cout << "YES";
            else cout << "NO";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}