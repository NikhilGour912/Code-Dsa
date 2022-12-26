#include<iostream>
using namespace std;

bool isPresent(int arr[][4],int target,int i,int j){
   for(int i=0;i<3;i++){
    for(int j =0;j<4;j++){
      if(arr[i][j]==target)
        return 1;
    }
   }
   return 0;
}

int main(int argc, char const *argv[])
{
    // initialisation of 2d array
    int arr[3][4];
 //int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
 //int arr[3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};

              // taking input -> row wise   
  
 for(int row=0; row<3; row++){
   for(int col=0;col<4;col++){
    cin>>arr[row][col];
   }
 }



             // input -> column wise
/*
for(int col=0; col<4; col++){
  for(int row = 0; row <3;row++){
    cin>>arr[row][col];
  }
}
*/

     // output
for(int row=0; row<3; row++){
    for (int col=0;col<4;col++){
    cout<<arr[row][col]<<" ";
    }
    cout<<endl;
 }

cout<<"enter the number to search : ";
int target;
 cin>>target;
  if(isPresent(arr,target,3,4)){
  cout<<"number is present ";
 }
  else{
  cout<<"not present ";
 }


    return 0;
}
