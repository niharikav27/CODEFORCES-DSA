#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    bool isColor = false;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            char ch;
            cin >> ch;

            if(ch == 'C' || ch == 'M' || ch == 'Y') {
                isColor = true;
            }
        }
    }

    if(isColor) cout << "#Color";
    else cout << "#Black&White";

    return 0;
}