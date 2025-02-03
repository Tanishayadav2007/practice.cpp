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
    int sum,greatest=0,row=0;
    for(i=0;i<3;i++){
        sum=0;
        for(j=0;j<3;j++){
        sum+=arr[i][j];}
        if(greatest<sum){
            greatest=sum;
            row=i;
        }
        }
        
        cout<<"greatest sum="<<greatest<<endl;
        cout<<"row which have maximun number of sum of its elements is "<<row;
    }