#include<iostream>
using namespace std;
void DeccimalToBinary(int decnum){
    int ans=0,pow=1,rem;
    while(decnum!=0){
      rem=decnum%2;
      decnum=decnum/2;
      ans+=(rem*pow);
      pow=pow*10;
    }
    cout<<ans;
}
int main(){
   int num;
   cout<<"enter decimal number for conversion: ";
   cin>>num;
   DeccimalToBinary(num);

    return 0;
}