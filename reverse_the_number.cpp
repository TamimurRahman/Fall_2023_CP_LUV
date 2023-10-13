#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, temp, mul = 0;
        cin >> n;
        while (n)
        {
            mul = mul * 10;
            temp = n % 10;
            mul = mul + temp;
            n = n / 10;
        }
        cout << mul << endl;
    }
}