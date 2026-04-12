#include <iostream>
using namespace std;
int main() {
    char a[4][4];
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){

            int b = 0;
            int w = 0;

            if(a[i][j] == '#') b++;
            else w++;

            if(a[i][j+1] == '#') b++;
            else w++;

            if(a[i+1][j] == '#') b++;
            else w++;

            if(a[i+1][j+1] == '#') b++;
            else w++;

            if(b >= 3 || w>= 3){
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
}