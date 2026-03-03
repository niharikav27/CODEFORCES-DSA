#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int m;
        cin >> m;

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (x[i] <= m)
            {
                count++;
            }
           
        }
        cout<<count<<endl;
        
    }
    return 0;
}