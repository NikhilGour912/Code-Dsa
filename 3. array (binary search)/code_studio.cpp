#include<iostream>
using namespace std;
/*             // arr[i] = i check karna hai
int findDup(int nums[],int n){
       int ans=0;
        for(int i=0;i<n;i++){
            ans = ans^nums[i];
        }
        for(int i =1;i<n;i++){
            if(nums[i]==i)
            ans = ans^i;
        }
        return ans; 
}




int main(int argc, char const *argv[])
{
    int nums[]= {1,2,5,7,9}
   cout<<findDup(nums,5); 
    return 0;
}
*/






//  pair sum 
/*
void pairSum(int arr[],int n,int s){
  for(int i =0; i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]+arr[j]==s){
            cout<<arr[i]<<arr[j]<<endl;
        }
    }
  }
}




int main(int argc, char const *argv[])
{
   int arr[] = {6,2,3,4,1};
   pairSum(arr,5,5);

    return 0;
}*/











// sort 0 and 1(alag alag karna hai (0,0,0,1,1,1))
/*
void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void sort(int arr[],int n){
  
  int i = 0,j = n-1;
while(i<j){
  while(arr[i]==0 && i<j){
    i++;
  }
  while(arr[j]==1 && i<j){
    j--;
  }
 
 if(i < j){            // arr[i]==1 &&  arr[j] == 0
    swap(arr[i],arr[j]);
    i++;
    j--;
 }
}

}




int main(int argc, char const *argv[])
{
    int arr[]={0,1,1,0,1,0};
    sort(arr,6);
    printArr(arr,6);

    return 0;
}
*/

