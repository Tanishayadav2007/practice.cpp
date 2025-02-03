#include<iostream>
using namespace std;
int main(){
    int arr[5],i,a;
    cout<<"enter 5 elements:"<<endl;
    for(i=0;i<5;i++){
        cin>>arr[i];
    }
    for(i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"enter number which you want to search:"<<endl;
    cin>>a;
    
    for(i=0;i<5;i++){
        if(arr[i]==a){
            cout<<"index "<<i<<endl;
        }
      
    }
    return 0;
}