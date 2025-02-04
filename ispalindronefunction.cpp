#include<iostream>
using namespace std;
bool ispalindrome(int n){
      int num,rem=0;
      int orig=n;
   while(n!=0){
    num=n%10;
    rem=rem*10+num;
    n=n/10;
   }
   if(orig==rem){
    return true;
   }
   else
   return false;
}
int main(){
    int number;
    bool palin;
    cout<<"enter the number:"<<endl;
    cin>>number;
    palin=ispalindrome(number);
    cout<<palin;
}