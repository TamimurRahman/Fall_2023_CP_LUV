#include<bits/stdc++.h>
using namespace std;
void func();
const int n = 10e3+10;
int a[n][n];
int main(){
    a[0][0] = 7;
    cout<<a[0][0]<<endl;
    func();
    cout<<a[0][0]<<endl;
}
void func(){
    a[0][0] = 5;
}