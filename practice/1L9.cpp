#include<iostream>
using namespace std;
       // printing the sum of all the elements of array

int sum(int arr[],int size){
    int s =0;
    for(int i=0;i<size;i++){
        s = s+ arr[i];
    }
    return s;
}
              // minimum element 
int min(int arr[],int size){
    int m = INT8_MAX;
    for(int i=0;i<size;i++){
        if(arr[i] < m){
            m = arr[i];
        }
    }
    return m;
}

            // maximum element
int max(int arr[],int size){
    int m = INT8_MIN;
    for(int i=0;i<size;i++){
        if(arr[i] > m){
            m = arr[i];
        }
    }
    return m;
}


          // function for linear search
  bool linearSearch(int brr[],int size , int key){
    for(int i=0;i<size;i++){
        if(brr[i] == key){
            return 1;
        }
    }
    return 0;
 }


        // reverse an array
void reverse(int arr[],int size){
    int s= 0;
    int e =size-1;
  for(int i = 0; i<size/2;i++){
     swap(arr[s++],arr[e--]);
  }
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    cout<<"Sum of all the elements : "<< sum(arr,size)<<endl;           
    cout<<"minimum element is : "<< min(arr,size)<<endl;
    cout<<"maximum element is : "<< max(arr,size)<<endl;
      
      reverse(arr,size);
    for(int i = 0; i<size;i++){
      cout<< arr[i];
  }
      cout<<endl;    
     int brr[5] = {6,7,8,4,3};
     cout<<"element is present  : "<<linearSearch(brr,5,3);
    return 0;
}
