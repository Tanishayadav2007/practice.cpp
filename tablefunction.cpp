#include<iostream>
using namespace std;
void table(int num){
  for(int i=1;i<=10;i++){
    cout<<num<<" X "<<i<<" = "<<num*i;
    cout<<endl;
  }
}
int main(){
  int n;
   cout<<"enter a number:";
   cin>>n;
   table(n);
}