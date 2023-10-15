#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str, str2;
    cin >> str;
    int size = str.length();
    cout << size << endl;
    for (int i = size - 1; i >= 0; i--)
    {
        str2.push_back(str[i]);
    }

    cout << str2;
}