#include<iostream>
using namespace std;

// to print sum -> row wise
void printSum(int arr[][3],int row,int col){
    
 for(int row=0; row<3; row++){
   int sum =0; 
   for(int col=0;col<3;col++){
     sum= sum+ arr[row][col] ;
   }
   cout<<sum<<" ";
 
 }
}


// to print sum -> column  wise
void printColSum(int arr[][3],int row,int col){
    
 for(int col=0; col<3; col++){
   int sum =0; 
   for(int row=0;row<3;row++){
     sum= sum+ arr[row][col] ;
   }
   cout<<sum<<" ";
 
 }
}


// to print largest row sum
int largestRowSum(int arr[][3],int row,int col){
   int maxi = INT8_MIN ; 
   int rowIndex = -1; 
 for(int row=0; row<3; row++){
   int sum =0; 
   for(int col=0;col<3;col++){
     sum= sum+ arr[row][col] ;
   }
    if(sum > maxi){
      maxi = sum;
      rowIndex = row;
    }
 }
  cout<<"the maximum sum is ->"<<maxi<<endl;
 return rowIndex;
}



int main()
{
    int arr[3][3] = {{1,2,3},{1,2,4},{1,2,5}};
    printSum(arr,3,3);
     cout<<endl;
    printColSum(arr,3,3);
    cout<<endl;
    cout<<"the index of row with largest sum is -> "<<largestRowSum(arr,3,3);
    

    return 0;
}
