#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count = 0;
    for( int i = 0 ; i<s.length() ; i++){
        bool isSame = false;
        for( int j = 0 ; j<i ; j++){
            if(s[i] == s[j]){
                isSame = true;
                break;
            }
        }
        if(!isSame ){
           count++;
        }    
    }
    if(count % 2 == 0){
        cout<< "CHAT WITH HER!";
    }else{
        cout<<"IGNORE HIM!";
    }
    return 0 ;
}


