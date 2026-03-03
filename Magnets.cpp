#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m[n];
    int count=1;
    for(int i = 0 ; i<n ; i++){
        cin>>m[i];
    }
    for(int i = 0 ; i<n-1 ; i++){
        if( m[i] != m[i+1]){
            count++;
        }
    }
    cout<<count;
    return 0 ;
}