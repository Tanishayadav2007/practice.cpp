#include<iostream>
using namespace std;
int  BinaryToDecimal(int binnum){
    int rem,ans=0,pow=1;
   while(binnum>0){
    rem=binnum%10;
    ans+=rem*pow;
    binnum/=10;
    pow*=2;
   }
   return ans;
}
int main(){
    int num;
    cout<<"enter binary number for conversion: ";
    cin>>num;
    cout<<BinaryToDecimal(num);
    return 0;
}