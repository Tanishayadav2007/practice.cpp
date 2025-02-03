#include<iostream>
using namespace std;
int main(){
    int arr[3][3],i,j;
    cout<<"provide array elements";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>arr[j][i];
        }
    }
    cout<<"provided array looks like"<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"\t"<<arr[i][j];
        }
        cout<<endl;
    }
    cout<<"sum of primary diagonal:";
    int sum=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i==j){
              sum+=arr[i][j];
            }
        }
    }
    cout<<sum;
    cout<<endl<<"sum of secondary diagonal:";
    int add=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i+j==2){
                add+=arr[i][j];
            }
        }
    }
    cout<<add;
}