#include<iostream>
using namespace std;

              // function for selection sort
void selection_sort(int arr[],int n){
   for(int i=0; i<n-1;i++){
      int minIndex = i;
       for(int j =i+1; j<n;j++){
           if(arr[j] < arr[minIndex]){
                minIndex = j;     
        }
       }
          swap(arr[minIndex],arr[i]);
   }
}
    
 



            // function for bubble sort
void bubble_sort(int arr[],int n){
  bool swapped = false;
    for(int i= 0; i<n-1;i++){
        for(int j= 0; j< n-i-1;j++){                     // can be optimised
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)        // no change means already sorted
        break;
    }

}








                    // function for insertion sort

 void insertion_sort(int arr[],int n){
    for(int i =1;i<n;i++){
        int temp = arr[i];
     int j = i-1;
        for(; j >= 0;j++){
            if(arr[j] > temp ){
                 arr[j+1] = arr[j];
            }
        
            else{
                break;
            }
        }
            arr[j+1] = temp;
    }
 }











                    // 