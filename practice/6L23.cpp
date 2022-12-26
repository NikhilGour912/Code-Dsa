#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void rowInput(int arr[][4],int i ,int j){
    for(int row = 0 ; row< i; row++){
        for(int col = 0; col<j;col++){
            cin>>  arr[row][col];
        }
     } 
}

void colWiseInput(int arr[][4],int i,int j){
     for(int col = 0 ; col< j; col++){
        for(int row = 0; row< i;row++){
           cin>>  arr[row][col];
        }
     } 
}



bool isPresent(int arr[][4],int target){
    for(int row = 0; row<3;row++){
        for(int col = 0; col<4;col++){
            if(arr[row][col]== target)
              return true;
        }
    }
    return false;
}


void sumRow(int arr[][3]){
    int sum =0;
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 3; col++){
           sum = sum + arr[row][col]; 
        }
        cout<< sum << " ";
        sum = 0;
    }
}



void sumCol(int arr[][3]){
   int sum = 0;
   for(int col = 0; col< 3; col++){
     for(int row = 0; row<3; row++){
        sum = sum + arr[row][col];
     }
     cout<< sum << " ";
     sum = 0;
   }
}

int largestRowSum(int arr[][3]){
    int max = INT8_MIN;
    int rowIndex = -1;
 for(int row = 0; row < 3; row++){
    int sum = 0;
        for(int col = 0; col < 3; col++){
           sum = sum + arr[row][col]; 
        }
     if(sum > max){
        max = sum ;
        rowIndex = row;
     }    
   }
   return rowIndex;
}







                      // Print like a wave 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
      vector<int> v;
      for(int col = 0;col< mCols; col++){
         if(col&1){
             // bottom to top
           for(int row = nRows-1;row>= 0; row--){
               v.push_back(arr[row][col]);
           }
         }
          else{
              // top to bottom
              for(int row = 0; row< nRows ; row++){
                  v.push_back(arr[row][col]);
              }
          }
      }
    return v;
}









                     // spiral print
 vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
      vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();
         
           int startingRow = 0;
           int endingRow =  row-1;
           int startingCol = 0;
           int endingCol = col-1;
        
        int count = 0;
        int total = row*col;
        
        while(count < total){
            
            // starting row
            for(int index = startingCol;count < total && index<=endingCol; index++){
                ans.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;
            
            // ending col
            for(int index = startingRow ; count<total && index<=endingRow; index++){
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;
            // ending row
            for(int index = endingCol;count < total && index>=startingCol; index--){
                ans.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;
            // starting col
            for(int index = endingRow ; count<total && index>=startingRow; index--){
                ans.push_back(matrix[index][startingCol]);
                count++;
            }
            startingCol++;
                
        }
         return ans;   
        
    }






                                // binary search in 2-d array
  bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int row = matrix.size();
       int col = matrix[0].size();
        
        int start = 0;
        int end = row*col-1;
         int mid = start + (end-start)/2;
        
        while(start <= end){
          int element = matrix[mid/col][mid%col];
            if(element==target){
                return 1;
            }
         if(element > target){
             end = mid-1;
         }
            else{
                start = mid+1;
            }
             mid = start + (end-start)/2;
        
        }







                                  // search in 2d array (type 2)

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size()-1;
        int rowIndex = 0;
        int colIndex = col-1;
        
        while(rowIndex<row && colIndex<col){
            int element = matrix[rowIndex][colIndex];
            if(element == target){
                return 1;
            }
             if(element > target){
               colIndex--;
            }
            else{
                rowIndex++;
            }
        }
        return 0;
    }
};










                        
  