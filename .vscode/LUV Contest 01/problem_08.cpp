#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                if (j == 0)
                {
                    c = 1;
                }
                else
                {
                    c = c * (i - j + 1) / j;
                }
                cout << c<<" ";
            }
            cout << endl;
        }
    }
}