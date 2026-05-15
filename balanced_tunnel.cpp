#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> enter(n), exitOrder(n);
    vector<int> pos(n + 1);

    for(int i = 0; i < n; i++) {
        cin >> enter[i];
        pos[enter[i]] = i;
    }

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> exitOrder[i];
        arr[i] = pos[exitOrder[i]];
    }

    int ans = 0;

    int mn = arr[n - 1];

    for(int i = n - 2; i >= 0; i--) {

        if(arr[i] > mn)
            ans++;

        mn = min(mn, arr[i]);
    }

    cout << ans;
}