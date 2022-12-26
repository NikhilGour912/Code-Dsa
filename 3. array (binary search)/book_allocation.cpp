#include<iostream>
using namespace std;
     // making functions to calculate the maximum and minimum element in an array
/*
int getMax(int num[],int n){
    int max = INT8_MIN ;
     for(int i=0;i<n;i++){              // inbult functions can be used to find minimun and maximum value
        if(num[i]>max){                // int maxi = max(maxi,num[i])
            max = num[i]; 
        }
     }
    return max;
}
int getMin(int num[],int n){
    int min = INT8_MAX ;
     for(int i=0;i<n;i++){                 
        if(num[i]<min){                  // int mini = min(mini,num[i])
            min = num[i];
        }
     }
    return min;
}

int main()
{
  int size;
  cin>>size;
   
   int num[100];
   for(int i=0;i<size;i++){
    cin>>num[i];
   }
   cout<<"the maximum value is    " << getMax(num,size)<<endl;
   cout<<"the minimum value is    " << getMin(num,size)<<endl;


    return 0;
}
*/











// calculating the sum of all the elements of an array
/*
int sum(int num[],int n){
    int add = 0;
    for(int i= 0;i<n;i++){
        add = add + num[i];
    }
    return add;
}

int main(int argc, char const *argv[])
{
    int size;
    cin>>size;
      int num[100];
      for(int i=0;i<size;i++){
        cin>>num[i];
      }

    cout<<"the sum is    "<<sum(num,size);


    return 0;
}
*/











//  the concept of linear search  (key ko search karna hai array mai hai ki nhi)
/*
bool search(int arr[],int n , int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(int argc, char const *argv[])
{
    int arr[5]={3,5,7,11,13};
     int key;
     cin>>key;

      int found = search(arr,5,key);
      if(found){
        cout<<"the element is present";
      }
      else{
        cout<<"not present";
      }
    
    return 0;
}
*/










// making a function to reverse an array
/*
void reverse(int arr[],int n){
    int start = 0;
    int end = n-1;
     while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
     }
}


void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } 
    cout<<endl;   
}

int main()
{
    int arr[6]= {1,2,3,5,6,7};
    reverse(arr,6);
    printArray(arr,6);
      
    int brr[5] = {9,8,7,6,5};
    reverse(brr,5);
     printArray(brr,5);
    return 0;
}
*/