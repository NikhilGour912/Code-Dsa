#include<iostream>
using namespace std;
/*           // function to swap alternate numbers (ek ke baad ek aane wale numbers)
void swapAlt(int arr[],int n){
    for(int i=0;i+1<n;i++){
        int a = arr[i];                   //  int a = arr[1]
        int b = arr[i+1];                 //  arr[1] = arr[0]
        arr[i+1] = a ;                    //  arr[0]  = a;
        arr[i] = b;
        i++;
    }
}

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}



int main()
{
     int arr[6]= {1,2,3,5,6,7};
     swapAlt(arr,6);
     printArr(arr,6);
    
    return 0;
}
*/






//    new approach of previous question (swapping the alternate numbers)
/*
int swapAlt(int arr[],int n){
    for(int i=0;i+1 <n;i+=2){
        swap(arr[i],arr[i+1]);
        
    }
}
void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
int main(int argc, char const *argv[])
{
    int arr[6]={1,3,5,7,9,4};
    swapAlt(arr,6);
    printArr(arr,6);
     cout<<endl;
       int brr[7]={1,3,5,7,9,4,8};
       swapAlt(brr,7);
       printArr(brr,7); 
    return 0;
}
*/