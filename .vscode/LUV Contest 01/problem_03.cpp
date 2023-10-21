#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        string str;
        long long int dec = 0;
        int j = 0;
        while (j < n)
        {
            cin >> str[j];
            str.push_back(str[j]);
            j++;
        }

        int digit_store;
        int i = n - 1;
        while (i >= 0)
        {
            digit_store = str[i] - '0';

            dec = dec + digit_store * pow(2, (n - 1) - i);
            i--;
        }

        cout << dec << endl;
    }
}