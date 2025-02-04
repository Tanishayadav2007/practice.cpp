#include<iostream>
using namespace std;
int sumofdigits(int n){

 int num,rem=0;
   while(n!=0){
    num=n%10;
    rem=rem+num;
    n=n/10;
   }
   return rem;
}
int main(){
    int number,sum;
    cout<<"enter a number"<<endl;
    cin>>number;
   sum=sumofdigits(number);
   cout<<"sum of digits of a number is:"<<sum;
}