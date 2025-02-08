#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"enter till which number you want table:(1 to ?)"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        cout<<"table of "<<i<<" is:"<<endl;
        for(j=1;j<=10;j++){
          cout<<i<<" X "<<j<<" = "<<i*j;
          cout<<endl;
        }
    }

    return 0;
}