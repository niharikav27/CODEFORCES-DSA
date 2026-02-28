#include<iostream>
using namespace std;
int main(){
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int c1,c2,c3;
    c1 = n*a;
    c2 = ((n/m)+(n%m!=0?1:0))*b;
    c3 = ((n/m) * b) +(n%m)*a;
    int min_cost = min(c1,min(c2,c3));
    cout<<min_cost;
}

