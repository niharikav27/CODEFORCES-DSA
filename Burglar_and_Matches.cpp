#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<pair<int,int>> arr;

    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        arr.push_back({b, a});
    }

    sort(arr.rbegin(), arr.rend());

    long long totalMatches = 0;

    for(int i = 0; i < m; i++){
        int b = arr[i].first;
        int a = arr[i].second;

        int take = min(a, n);
        totalMatches += 1LL * take * b;

        n -= take;

        if(n == 0) break;
    }

    cout << totalMatches;
}