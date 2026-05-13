#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    deque<char> dq;

    for (int i = 0; i < n; i++) {

        if (n % 2 == 1) {
            if (i % 2 == 0)
                dq.push_back(s[i]);
            else
                dq.push_front(s[i]);
        }

        else {
            if (i % 2 == 0)
                dq.push_front(s[i]);
            else
                dq.push_back(s[i]);
        }
    }

    for (char c : dq)
        cout << c;

    return 0;
}