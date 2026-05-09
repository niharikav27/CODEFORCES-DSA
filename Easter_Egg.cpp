#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string base = "ROYGBIV";
    string extra = "GBIV";

    string ans = "";

    for (int i = 0; i < 7; i++) {
        ans += base[i];
    }

    for (int i = 0; i < n - 7; i++) {
        ans += extra[i % 4];
    }

    cout << ans;

    return 0;
}