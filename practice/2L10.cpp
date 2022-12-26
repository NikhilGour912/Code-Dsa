#include<iostream>
using namespace std;
#include<bits/stdc++.h>

     // swap alternates
/*
void SwapAlternate(int arr[],int size){
  
   for(int i = 0; i<size;i+=2){
    if(i+1 < size){
        swap(arr[i],arr[i+1]);
  }
}
}



int main()
{
    int arr[5] = {1,2,3,4,5};
    int size = 5;
     SwapAlternate(arr,size);
     for(int i = 0; i<size;i++){
       cout<< arr[i] <<" ";
  } 
    return 0;
}


*/


  // pair sum

// vector<vector<int>> pairSum(vector<int> &arr, int s){
//        vector<vector<int>> ans;
//     for(int i=0;i<arr.size();i++){
//         for(int j =i+1;j<arr.size();j++){
//             if(arr[i]+arr[j]==s){
//                vector<int> temp;
//                 temp.push_back(min(arr[i],arr[j]));
//                 temp.push_back(max(arr[i],arr[j]));
//                 ans.push_back(temp);
//             }
//         }
//     }
//     sort(ans.begin() , ans.end() );
//     return ans;









/*

             // sort 0 and 1 
   void SortOne(int arr[],int size){
    int s =0;
    int e = size-1;

    while(s < e){
    if(arr[s]==0){
      s++;
    }
     if(arr[e]==1){
      e--;
     }
    else if(arr[s]==1 && arr[e]==0){
      swap(arr[s],arr[e]);
    }

    }

   }
   


   #include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
  int i =0;
  int j=0;
  int k = n-1;
    while(j < k){
        if(arr[i]==0 && arr[j]==0){
            i++;
            j--;
        }
        else if(arr[j] == 1){
            j++;
        }
        else if(arr[j] == 2){
            swap(arr[j],arr[k--]);
        } 
        else if(arr[j] == 0 && arr[i] == 1){
            swap(arr[i],arr[j++]);
        }
        
    }
}


   int main()
   {
    int arr[] = {1,0,0,1,0,1,0,1,1,0};
    int size = 10;
    SortOne(arr,size);
    for(int i=0; i<size; i++){
      cout<< arr[i] <<" ";
    }
    return 0;
   }
   
*/


