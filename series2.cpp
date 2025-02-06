// Write a program in C++ to calculate the sum of the series (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n).
#include<iostream>
using namespace std;
int main(){
   int i,num,sum=0;
   cout<<"enter the limit of series"<<endl;
   cin>>num;
   for(i=1;i<=num;i++){
    sum+=(i*i);
   }
  cout<<"sum of the series is:"<<sum;

return 0;
}