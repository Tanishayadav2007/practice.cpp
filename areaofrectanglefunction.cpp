#include<iostream>
using namespace std;
int area(int len,int bre){
    return len*bre;
}
int main(){
    int l,b,a;
    cout<<"provide value of length and breadth:"<<endl;
    cin>>l>>b;
    a=area(l,b);
    cout<<"area of rectangle is:"<<a;

    return 0;
}