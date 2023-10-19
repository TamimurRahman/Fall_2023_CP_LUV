#include <bits/stdc++.h>
using namespace std;
void convert_upper(string str);
int main()
{
    string str;
    getline(cin, str);
    convert_upper(str);
}
void convert_upper(string str)
{
    char lower_str, upper_str;
    for (int i = 0; i < str.size(); i++)
    {

        if (str[i] != ' ')
        {
            lower_str = str[i];
            upper_str = lower_str - 32;
            cout << upper_str;
        }
        else
        {
            cout << endl;
        }
    }
}