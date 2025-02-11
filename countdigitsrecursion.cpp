#include<iostream>
using namespace std;
int count(int n){
    if(n==0)
        return 0;
    else
    return 1+count(n/10);
}
int main(){
    int number,ans;
    cout<<"enter a number:"<<endl;
    cin>>number;
    ans=count(number);
    if(number==0){
        cout<<"the number counts 1 digit";
    }
    else
      cout<<"the number contains "<<ans<<" digits";

    return 0;
}