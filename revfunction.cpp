#include<iostream>
using namespace std;
int reverseNumber(int n){
    int num,rem=0;
   while(n!=0){
    num=n%10;
    rem=rem*10+num;
    n=n/10;
   }
   return rem;
}
int main(){
int number,rev;
cout<<"enter number:"<<endl;
cin>>number;
rev=reverseNumber(number);
cout<<"reverse of a number is:"<<rev;
}