#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a1,a2,a3;
    int b1,b2,b3;
    cin>>a1>>a2>>a3;
    cin>>b1>>b2>>b3;
    int n;
    cin >> n;
    int sum1 = a1 + a2 +a3;
    int sum2 = b1 + b2 +b3;
    int x = sum1 / 5;
    if (sum1 % 5 != 0)
    {
        x++;
    }
    int y = sum2 / 10;
    if (sum2 % 10 != 0)
    {
        y++;
    }
    if (x + y <= n)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}