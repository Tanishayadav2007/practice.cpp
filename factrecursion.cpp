#include<iostream>
using namespace std;
int fact(int num){
    if(num==0||num==1)
    return 1;
    else
    return num*fact(num-1);
}
int main(){
    int fac,ans;
    cout<<"enter the number for factorial:"<<endl;
    cin>>fac;
    ans=fact(fac);
    cout<<ans;
    return 0;
}