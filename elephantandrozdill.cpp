#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long d[100005];
    for(int i=0;i<n;i++){
        cin>>d[i];
    }
    long long mind = d[0];
    int count=1;
    int index =0;    
    for(int i=1;i<n;i++){
        if(d[i]<mind){
            mind = d[i];
            index =i;
            count=1;
        }    
        else if(d[i]==mind){
            count++;
        }
    }
    if(count==1){
        cout<<index+1;
    }
    else{
        cout<<"Still Rozdil";
    }
    
}