#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    n=4;
    //Top
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout<<"*";
        }
      //spaces
        for(int k=0;k<(n-i-1);k++){
            cout<<" ";
        }
        //spaces
         for(int k=0;k<(n-i-1);k++){
            cout<<" ";
        }
        for(j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
       //Bottom
    for(i=n-1;i>=0;i--){
        for(j=0;j<=i;j++){
            cout<<"*";
        }
 
        for(int k=0;k<(n-i-1);k++){
            cout<<" ";
        }
         for(int k=0;k<(n-i-1);k++){
            cout<<" ";
        }
        for(j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}