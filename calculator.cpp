#include<iostream>
using namespace std;
int main(){
  int num1,num2,result,optchoice;
  char repchoice;
  do{
    cout<<"press 1 for addition"<<endl;
    cout<<"press 2 for subtraction"<<endl;
    cout<<"press 3 for multiplication"<<endl;
    cout<<"press 4 for division"<<endl;
    cout<<"press 5 for exit"<<endl;
    cin>>optchoice;
    if(optchoice>=1&&optchoice<5){
        cout<<"provide two integers to performs calculation:"<<endl;
        cin>>num1>>num2;
    }
    switch(optchoice){
        case 1:result=num1+num2;
        cout<<"addition is:"<<result;break;
        case 2:result=num1-num2;
        cout<<"subtraction is:"<<result;break;
        case 3:result=num1*num2;
        cout<<"multiplication is:"<<result;break;
        case 4:result=num1/num2;
        cout<<"division is:"<<result;break;
        case 5:exit(0);
        default:cout<<"wrong choice";
    }
    cout<<endl<<"do you wish to repeat:(y/n)?"<<endl;
    cin>>repchoice;

  }while(repchoice=='y'||repchoice=='Y');

    return 0;
}