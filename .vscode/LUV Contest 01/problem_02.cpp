#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, seq;
    cin >> t;
    while (t--)
    {
        cin >> n;
       long long  int mul = 1;
        while (n--)
        {
            cin >> seq;
            mul = mul * seq;
        }
        int temp = mul % 10;
        if (temp == 2 || temp == 3 || temp == 5)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}