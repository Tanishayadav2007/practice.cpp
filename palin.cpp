#include<iostream>
using namespace std;
int main(){
    int num,n,result=0;
    int orignum;
    cout<<"enter a number:"<<endl;
    cin>>num;
    orignum=num;
    while(num!=0){
      n=num%10;
      result=(result*10)+n;
      num=num/10;
    }
    if(orignum==result){
        cout<<"yes";
    }
    else
    cout<<"no";

    return 0;
}