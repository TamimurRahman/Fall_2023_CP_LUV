#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int mul = 1;
        for(int i=1;i<=n;i++){
            mul = mul*2;
        }
        int temp = mul%10;
        if(temp==2 || temp == 3 || temp ==5){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}