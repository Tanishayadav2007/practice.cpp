#include<iostream>
using namespace std;
int power(int num,int p){
 if(p==0)
 return 1;
 else
 return num*(power(num,p-1));
}
int main(){
    int p,n,ans;
    cout<<"enter number and power";
    cin>>n>>p;
    ans=power(n,p);
    cout<<ans;
}