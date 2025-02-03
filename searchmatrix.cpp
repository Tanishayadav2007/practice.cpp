#include<iostream>
using namespace std;
int main(){
   int i,j,arr[3][3];
   int element;
   cout<<"provide elements of the array:"<<endl;
   for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        cin>>arr[i][j];
    }
   }
   for(i=0;i<3;i++){
    for(j=0;j<3;j++){
       cout<<"\t"<<arr[i][j];
    }
    cout<<endl;
   }
   cout<<"enter element to be searched:"<<endl;
   cin>>element;
   for(i=0;i<3;i++){
    for(j=0;j<3;j++){
       if(arr[i][j]==element){
        cout<<"index "<<i<<","<<j;
       } 
    }   }
}