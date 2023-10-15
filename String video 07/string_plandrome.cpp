#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str, str2;
    cin >> str;
    int size = str.length();
    for (int i = size - 1; i >= 0; i--)
    {
        str2.push_back(str[i]);
    }
    if (str == str2)
    {
        cout << "string is plandrome" << endl;
    }
    else
    {
        cout << "String is not plandrome" << endl;
    }
}