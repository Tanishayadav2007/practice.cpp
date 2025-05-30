#include<iostream>
using namespace std;
int main(){
    int i,j,n=4;
    for(i=0;i<n;i++){
        for(j=n-1;j>i;j--){
        cout<<" ";
        }
        for(j=0;j<=i;j++){
        cout<<j+1;
        }
        for(int k=0;k<i;k++){
            cout<<i-k;
        }
        cout<<endl;
    }
    return 0;
}