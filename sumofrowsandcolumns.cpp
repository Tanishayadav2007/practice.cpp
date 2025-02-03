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
    cout<<"sum of rows:"<<endl;
    int sum=0;
    for(i=0;i<3;i++){
        cout<<"sum of row "<<i<<" is :";
        for(j=0;j<3;j++){
        sum+=arr[i][j];
        }
        cout<<sum;
        cout<<endl;
        sum=0;
    }
    cout<<"sum of columns:"<<endl;
    int add=0;
    for(i=0;i<3;i++){
        cout<<"sum of column "<<j<<" is :";
        for(j=0;j<3;j++){
        add+=arr[j][i];
        }
        cout<<add;
        cout<<endl;
        add=0;
    }
}