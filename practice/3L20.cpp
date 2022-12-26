#include<iostream>
using namespace std;
#include<bits/stdc++.h>

// reverse ans arr after m position

// merge two sorted array

void merge(int arr1[],int n, int arr2[], int m,int arr3[]){
   int i = 0;
   int j = 0;
   int k = 0;
   while(i < n && j < m){
      if(arr1[i] < arr2[j]){
         arr3[k++] = arr1[i++];
      }
      else {
         arr3[k++] = arr2[j++];
      }
   }

  // copy elements of first array
   while(i < n){
    arr3[k++] = arr1[i++];
   }

   // copy elements of second array
   while(j < m){
    arr3[k++] = arr1[j++];
   }
}

void print(int arr3[],int a){
    for(int i =0; i<a; i++){
       cout<< arr3[i] << " ";
    }
}


     // move zeroes to the end 
void moveZeroes(vector<int>& nums) {
        int i =0;
        for(int j =0;j<nums.size();j++){
            if(nums[j] != 0){
                swap(nums[i],nums[j]);
                i++;
            }
        }
    }


int main()
{
   int arr1[5] = {1,2,5,7,9};
   int arr2[3] = {2,4,6};

   int arr3[8] = {0};
   merge(arr1,5,arr2,3,arr3);
   print(arr3,8); 
    return 0;
}
