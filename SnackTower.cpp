// A. Snacktower

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> snacks(n);
    for(int i = 0; i < n; i++) {
        cin >> snacks[i];
    }

    vector<bool> arrived(n + 1, false);
    int expected = n;

    for(int i = 0; i < n; i++) {
        arrived[snacks[i]] = true;

        // print all possible snacks
        while(expected >= 1 && arrived[expected]) {
            cout << expected << " ";
            expected--;
        }
        cout << endl;
    }

    return 0;
}