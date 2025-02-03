#include<iostream>
using namespace std;
int main(){
  int i,j,rows,cols;
  cout<<"enter the number of rows and columns you have:"<<endl;
  cin>>rows>>cols;
  int arr[rows][cols];
  cout<<"enter elments of array:";
  for(i=0;i<rows;i++){
   for(j=0;j<cols;j++){
    cin>>arr[i][j];
   }
  }
  cout<<"matrix you entered:"<<endl;
  //first row
  for(i=0;i<rows;i++){
    for(j=0;j<cols;j++){
        cout<<"\t"<<arr[i][j];
    }
    cout<<endl;
  }
 for(i=0;i<3;i++){
    cout<<arr[0][i]<<" ";
 }
   // Print the last row (excluding the corners)
 for(i=0;i<cols;i++){
    cout<<arr[rows-1][i]<<" ";
    }
 //the last column (excluding the first and last elements)
 for(i=1;i<rows-1;i++){
    cout<<arr[i][cols-1]<<" ";
 }
    // Print the first column ( excluding the corners)
  for(i=1;i<rows-1;i++){
    cout<<arr[i][0]<<" ";
  }

}