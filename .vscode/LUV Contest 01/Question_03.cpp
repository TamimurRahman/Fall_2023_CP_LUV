#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string n;
        int result = 0,power = 1;
        cin>>n;
        for(int i=n.size()-1;i>=0;i--){
            int degit = n[i]-'0';
            result = result + degit*power;
            power = power*2;
        }
        cout<<result<<endl;

    }
}