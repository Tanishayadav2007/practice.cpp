#include<iostream>
using namespace std;
int main(){
    int i,j,n,m,a,b;
     cout<<"provide order of matrix 1:"<<endl<<"i =";
     cin>>a;
     cout<<"j =";
     cin>>b;
     cout<<"provide order of matrix 2:"<<endl<<"n =";
     cin>>n;
     cout<<"m =";
     cin>>m;
     if(b==n){
     cout<<"order after multiplication would be:"<<a<<"X"<<m<<endl;
     int arr[a][b],ar[n][m];
    cout<<"provide array elements of matrix 1:";
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            cin>>arr[i][j];
        }
    }
     cout<<"matrix 1 looks like:"<<endl;
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            cout<<"\t"<<arr[i][j];
        }
        cout<<endl;
    }
     cout<<"provide array elements of matrix 2:";
  for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>ar[i][j];
        }
    }
   
      cout<<"matrix 2 looks like:"<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<"\t"<<ar[i][j];
        }
        cout<<endl;
    }
    

     }
     else
     cout<<"multiplication not possible";
}