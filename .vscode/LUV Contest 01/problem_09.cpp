#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        int X = 0, s = 0;

        cin >> str;
        int len = str.size();
        for (int i = 0; i < len; i++)
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] = str[i] + 32;
                s = -str[i];
                X = X + s;
                //  cout << s << endl;
            }

            else
            {
                str[i] = str[i] - 32;
                s = str[i];
                // cout << s << endl;
                X = X + s;
            }
        }
        int flag = 1;
        // cout << "Ans : " << X << endl;
        for (int i = 2; i <= X / 2; i++)
        {
            if (X % i == 0)
            {
                flag = 0;

                break;
            }
            else
            {
                flag = 1;
            }
        }
        if (flag == 1)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
}