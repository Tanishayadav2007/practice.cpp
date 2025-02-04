#include<iostream>
using namespace std;
int factorial(int n){
   
     int i,fact=1;
     if(n<1){
        return 0;
     }
     for(i=1;i<=n;i++){
   fact=fact*i;
     }
     return fact;
}
int main(){
  int n,fac;
  cout<<"enter a number:";
    cin>>n;
  fac=factorial(n);
  cout<<"factorial of "<<n<<" is:"<<fac;


}