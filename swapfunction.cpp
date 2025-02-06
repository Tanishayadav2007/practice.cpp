#include<iostream>
using namespace std;
void swap(int a,int b){

   int temp;
   temp=b;
   b=a;
   a=temp;
   cout<<a<<endl<<b;
}
int main(){
   int num1,num2;
   cout<<"enter two number to swap:"<<endl;
   cin>>num1>>num2;
   cout<<"number 1 and number 2 after swapping:"<<endl;
   swap(num1,num2);

   return 0;

}   