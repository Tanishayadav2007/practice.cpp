#include<iostream>
using namespace std;
int main(){
  int arr[5],i;
  cout<<"enter 5 elements:"<<endl;
  for(i=0;i<5;i++){
    cin>>arr[i];
  }
  
  for(i=0;i<5;i++){
    cout<<arr[i]<<" ";
  }
  int j,k;
  for(i=0;i<5;i++){
    for(j=0;j<5-i;j++){
      if(arr[i]>arr[i+1]){
        k=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=k;
      }
    }
  }
  cout<<endl<<"sorted array:"<<endl;
  for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
  }
    return 0;
}