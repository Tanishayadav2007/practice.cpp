#include<iostream>
using namespace std;
int sumofdigits(int n){
    if(n==0)
    return 0;
    else
    return (n%10)+sumofdigits(n/10);
}
int main(){
     int num;
     cout<<"enter number"<<endl;
     cin>>num;
     cout<<"sum of digits:"<<sumofdigits(num);

    return 0;
}