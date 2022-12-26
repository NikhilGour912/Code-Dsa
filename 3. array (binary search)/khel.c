#include<stdio.h>

 int binarySearch(int arr[],int key,int n){
  int s = 0;
  int e = n-1;
  int mid = s + (e-s)/2;
  
  while(s <= e){
    if(arr[mid]==key){
      return mid;
    }
    else if(arr[mid] < key){
        s = mid +1;
    }
    else{
        e = mid -1;
    }
    mid =  s + (e-s)/2;
  }
   return -1;
}



int linear_Search(int arr[],int key,int size){
    for(int i = 0; i< size ; i++){
        if(arr[i]== key){
            return i;
        }
    }
    return -1;
}




int main(int argc, char const *argv[])
{
     int arr[] = {1,2,3,4,5,6};
    int index = binarySearch(arr,5,6);
    int linear = linear_Search(arr,5,6);
    printf("index is %d \n",index);
    printf("index is %d",linear);
    
    return 0;
}



