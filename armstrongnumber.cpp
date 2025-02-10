//check whether the number is armstrong or not.
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num,n,originalnum,count=0,result=0;
    cout<<"enter a number:"<<endl;
    cin>>num;
    originalnum=num;
    while(num!=0){
        num=num/10;
        count++;}
    num=originalnum;
    while(num!=0){
        n=num%10;
        result+=pow(n,count);
        num=num/10;
    }
    if(originalnum==result){
        cout<<"yes the number is armstrong";}
    else
    cout<<"no the number is not armstrong";
    return 0;
}