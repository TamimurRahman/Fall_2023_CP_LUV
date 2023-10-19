#include<bits/stdc++.h>
using namespace std;
int sum_digits(int);
int main(){
    int num1,num2;
    cin>>num1>>num2;
    int sum_digits_result = sum_digits(num1)+sum_digits(num2);
    cout<<"Ans : "<<sum_digits_result<<endl;
}
int sum_digits(int num){
    
    int temp , sum = 0;
    while(num){
        temp = num%10;
        num = num/10;
        sum = sum+temp;
    }
    return sum;
}