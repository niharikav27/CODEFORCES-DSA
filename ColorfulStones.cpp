#include<iostream>
using namespace std;
int main(){
    string s ,t ;
    cin>>s;
    cin>>t;
    int pos = 0;
    for(int i = 0 ; i<t.length() ; i++){
        if(s[pos] == t[i]){
            pos++;
        }
    }
    cout<< pos + 1;
    return 0;
}