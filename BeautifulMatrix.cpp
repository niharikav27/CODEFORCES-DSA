#include<iostream>
using namespace std;
int main(){
    int x , at_i , at_j , moves;
    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            cin>>x;
            if(x==1){
                at_i = i;
                at_j = j;
            }
        }
    }
    moves = abs(at_i - 2) + abs(at_j - 2);
    cout<<moves;
}