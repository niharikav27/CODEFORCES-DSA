#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count_p=0;
    int count_c=0;
    for(int i = 0 ; i<n ;i++){
        int a;
        cin>>a;

        if(a>0){
            count_p += a;
        }else {
            if(count_p>0){
                count_p--;
            }else{
                count_c++;
            }
        }
    }
    cout<<count_c;
    return 0 ;
}