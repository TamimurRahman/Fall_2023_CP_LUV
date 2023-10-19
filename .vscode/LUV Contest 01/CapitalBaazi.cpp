#include <bits/stdc++.h>
using namespace std;
char convert_upper(string str);
int main()
{
    string str ;
    getline(cin,str);
    convert_upper(str);
}
char convert_upper(string str)
{
    char lower_str, upper_str;
    string str_2;
    for (int i = 0; i < str.size(); i++)
    {
        lower_str = str[i];
        if (lower_str == ' ')
        {
            str_2 = str_2 + '\n';
        }
        else
        {
            upper_str = lower_str - 32;
            str_2 = str_2 + upper_str;
        }
    }
    cout << str_2 << endl;
}