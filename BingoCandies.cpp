#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count[10001] = {0};
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int a;
                cin >> a;
                count[a]++;
            }
        }
        bool yes = true;
        for (int i = 0; i <= n*n; i++)
        {
            if (count[i] > n*(n-1))
            {
                yes = false;
            }
        }
        if (yes)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "No\n";
        }
    }    
        return 0;
}
    