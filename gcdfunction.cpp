#include<iostream>
using namespace std;
int gcd(int a,int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main(){
    int lcm,num1,num2;
    cout<<"enter two numbers:"<<endl;
    cin>>num1>>num2;
    lcm=gcd(num1,num2);
    cout<<"lcm of "<<num1<<" and "<<num2<<" is:"<<lcm;

    return 0;
}