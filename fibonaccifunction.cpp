#include<iostream>
using namespace std;
void fibonacci(int n){
  int a=0,b=1;
  cout<<a<<" "<<b<<" ";
for(int i=3;i<=n;i++){
    int next;
    next=a+b;
    cout<<next<<" ";
    a=b;
    b=next;
}
cout<<endl;
}
int main(){
   int num;
   cout<<"enter the number:"<<endl;
   cin>>num;
   cout << "Fibonacci sequence up to "<<num <<" terms: ";
   fibonacci(num);

    return 0;
}