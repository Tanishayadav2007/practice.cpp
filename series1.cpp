//Write a program in C++ to find the sum of the series 1 + 1/2^2 + 1/3^3 + ..+ 1/n^n.
#include<iostream>
#include<cmath>
using namespace std;
int main(){
   int i,n;
   float sum=0;
   cout<<"enter the number:"<<endl;
   cin>>n;
   for(i=1;i<=n;i++){
    sum+=1/(pow(i,i));
   }
   cout<<sum;
    return 0;
}