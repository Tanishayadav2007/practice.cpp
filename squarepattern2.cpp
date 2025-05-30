#include<iostream>
using namespace std;
int main(){
    int i,j;
    int count=1;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}