#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int mn = *min_element(a.begin(), a.end());
    int mx = *max_element(a.begin(), a.end());

    int count = 0;

    for(int i = 0; i < n; i++) {
        if(a[i] > mn && a[i] < mx) {
            count++;
        }
    }

    cout << count;

    return 0;
}