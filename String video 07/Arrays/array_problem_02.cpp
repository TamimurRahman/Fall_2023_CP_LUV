#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int arr[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> arr[i][j];
        }
    }
    int sum_row = 0, sum_col = 0,flag = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            sum_row = sum_row + arr[i][j];
        }

        for (int k = 0; k < a; k++)
        {
            sum_col = sum_col + arr[k][i];
        }
        cout << "sum of row : " << i + 1 << " : " << sum_row << endl;
        cout << "sum of col : " << i + 1 << " : " << sum_col << endl;

        sum_row = 0;
        sum_col = 0;

        if(sum_row==sum_col){
            flag = 1;
        }else{
            flag = 0;
        }
    }
}