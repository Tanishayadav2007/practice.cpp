#include<iostream>
using namespace std;
int main(){
  int n,i;
  cout<<"enter number of elements:"<<endl;
  cin>>n;
  int arr[n];
  for(i=0;i<n;i++){
    cin>>arr[i];
  }
  for(i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  float sum=0;
  for(i=0;i<n;i++){
    sum=sum+arr[i];
  }
  float avg;
  avg=float(sum/n);
  cout<<endl<<"sum is:"<<sum;
  cout<<endl<<"avg is:"<<avg;
    return 0;
}