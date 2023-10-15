#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str, str2;
    cin >> str;
    int size = str.length();
    cout << size << endl;
    int count = 0;
    for (int i = size - 1; i >= 0; i--)
    {
        str2[count] = str[i];
        count++;
    }

    for(int j = 0;j<=count;j++){
         cout << str2[j];
    }
       
  
}