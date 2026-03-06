#include<iostream>
using namespace std;
int main(){
    int n,h;
    cin>>n>>h;
    int a[1000];
    for( int i = 0;i<n;i++){
        cin>>a[i];
    }
    int count = 0;
    for( int i=0;i<n;i++){
        if (a[i]>h){
           count= count + 2;
        }
        else{
            count = count+1 ;
        }
    }
    cout<<count<<endl;
}