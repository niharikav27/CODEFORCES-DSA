#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int t[n];
    int c1 = 0 , c2 = 0 , c3 = 0;
    for(int i =0;i<n;i++){
        cin>>t[i]; 
        if(t[i]==1){
            c1++;
        }
        else if(t[i]==2){
            c2++;
        }
        else if(t[i]==3){
            c3++;
        }
    }
    int x = min(c1,min(c2,c3));
    cout<<x;
    int arr1,arr2,arr3;
    for(int i=0;i<n;i++){
        if(t[i]==1){
            arr1+=i;
        }
        else if(t[i]==2){
            arr2 +=i;
        }
        else if(t[i]==3){
            arr3+=i;
        }
    }
   
    
    return 0;
}