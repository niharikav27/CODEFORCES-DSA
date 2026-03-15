#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int x;
    cin >> x;

    int bottom = 7 - x;

    for(int i = 0; i < n; i++){

        int a,b;
        cin >> a >> b;

        if(a == x || a == bottom || b == x || b == bottom){
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
}