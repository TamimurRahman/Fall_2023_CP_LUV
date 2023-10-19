#include<bits/stdc++.h>
using namespace std;
void fun(string &a,string k){
    a = "Rahim";
 k = "Tanvir";
}

int main(){
    string s = "Tamim",k = "Rahman";
    cout<<"Before pass string references : "<<s<<" "<<k<<endl;
    fun(s,k);
    cout<<"After passing string references : "<<s<<" "<<k<<endl;

}