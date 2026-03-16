#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int> visited(n,0);
        int i = 0;
        int count = 0;
        while(i >= 0 && i < n){
            if(visited[i]) break;
            visited[i] = 1;
            count++;
            if(s[i] == 'R') i++;
            else i--;
        }
        cout<<count<<endl;
    }
}