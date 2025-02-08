#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"enter size of the array: ";
    cin>>size;
    int arr[size],sum=0,i;
    cout<<"Now, enter elements of the array";
    for(i=0;i<size;i++){
       cin>>arr[i];
    }
    cout<<"Your array looks like:";
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"sum of elements of the array:";
    for(i=0;i<size;i++){
        sum+=arr[i];
    }
    cout<<sum;
    return 0;
}