#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
        // int n;
        // cin>>n;
        // double a[n];
        // double sum;
        // for(int i = 0;i<n;i++){
        //     cin>>a[i];
        //     sum+=a[i];
        // }
        // int p = sum/n;
        // cout<<p;
        

    // }
    int n;
    cin >> n;
    double sum;
    for (int i = 0; i < n; i++)
    {
        double drinks;
        cin >> drinks;
        sum += drinks;
    }
    double result = sum / n;
    cout << result <<setprecision(12);
    return 0;
}