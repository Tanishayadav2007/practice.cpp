#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"enter two numbers:"<<endl;
    cin>>num1>>num2;
    num1=num1-num2;
    num2=num1+num2;
    num1=num2-num1;
    cout<<num1<<endl<<num2;
return 0;
}