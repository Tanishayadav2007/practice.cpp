#include<iostream>
using namespace std;
int sum(int num){
    if(num==1)
    return 1;
    else
   return num+sum(num-1);
}
int main(){
     int n,add;
    cout<<"enter the series length"<<endl;
    cin>>n;
    add=sum(n);
    cout<<add;

    return 0;
}