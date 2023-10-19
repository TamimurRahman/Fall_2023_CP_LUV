#include<bits/stdc++.h>
using namespace std;
void swap_num(int &a,int &b);
int main(){
    int a = 5,b = 3;
    cout<<"Numbers before swap "<<a<<" "<<b<<endl;
    swap_num(a,b);
    cout<<"Numbers after swap "<<a<<" "<<b<<endl;
    
}
void swap_num(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}