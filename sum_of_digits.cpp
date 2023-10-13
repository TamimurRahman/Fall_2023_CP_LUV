#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N,temp,sum = 0;
        cin>>N;
        while(N!=0){
            temp = N%10;
            N = N/10;
            sum = sum + temp;
        }
        cout<<sum<<endl;
    }
    return 0;
}