#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0 ; i<n ; i++){
        cin>>a[i];
    }
    int left = 0;
    int right = n-1;
    int sereja = 0;
    int dima = 0;
    int turn = 1;

    while(left <= right){
        if(a[left] >= a[right]){
            if(turn == 1){
                sereja += a[left];
            }
            else{
                dima += a[left];
            }
            left++;
        }else{
            if(turn == 1){
                sereja += a[right];
            }else{
                dima += a[right];
            }
            right--;
        }
        if(turn == 1){
            turn = 2;
        }
        else{
            turn =1;
        }
    }
    cout<<sereja<<" "<<dima;
}