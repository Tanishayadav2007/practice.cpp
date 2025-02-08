#include<iostream>
using namespace std;
int main(){
   int num,i;
   cout<<"enter the number for its table:"<<endl;
   cin>>num;
   cout<<"Table of "<<num<<" is:"<<endl;
   for(i=1;i<=10;i++){
     cout<<num<< " X "<<i<<" = "<<i*num;
     cout<<endl;
   }

    return 0;
}