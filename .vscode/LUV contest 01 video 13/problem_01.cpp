#include <bits/stdc++.h>
using namespace std;
char upperCase(char c);
int main()
{

    while (true)
    {
        string str;
        cin >> str;
         cin.ignore();
        if (str.size()==0)
        {
            break;
        }
        cout<<"size : "<<str.size()<<endl;
        for (int i = 0; i < str.size(); i++)
        {
            str[i] = upperCase(str[i]);
        }
        cout << str << endl;
    }
}
char upperCase(char c)
{

    return c - 32;
}