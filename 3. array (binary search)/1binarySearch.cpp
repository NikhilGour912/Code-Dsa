#include<iostream>
using namespace std;

int binary_search(int arr[],int n,int key){
   int start = 0;
   int end = n-1;
  int mid = (start + end)/2 ;              // agar (start + end)/2 integer ki range se bahar ho gye (badi value's ke liye )  _ error aa jayega
  while(start <= end){                     //  (start + end)/2 = start + (end - start)/2  ;
                                           // isse value kam ho jaati haai

     if(key == arr[mid]){
        return mid ;
     }
    if( key > arr[mid]){
        start = mid + 1;
        
    }
   else{
      end = mid-1;
      }
      mid = (start + end)/2;

  }
  return -1 ;

}


int main()
{
    int arr[] = {1,2,3,4,5,6};
    int index = binary_search(arr,6,5);
    cout<<"index is "<< index;



    return 0;
}
