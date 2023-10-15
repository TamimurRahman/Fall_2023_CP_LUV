#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str, str2;
    int flag = 0;
    cin >> str;
    int size = str.length();
    for (int i = 0; i <= size / 2; i++)
    {
        if (str[i] == str[(size - 1) - i])
        {
            flag = 1;
        }
        else
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "string is plandrome" << endl;
    }
    else
    {
        cout << "String is not plandrome" << endl;
    }
}