#include<iostream>
using namespace std;
/*                                // position of first and last element(key)
int first_occurence(int arr[], int n,int key){
    int start = 0;
    int end = n-1;
    int ans = -1;
    int mid = start + (end-start)/2;

    while(start <= end){
        
      
    if(arr[mid] == key){
        ans = mid;
          end= mid - 1;
    }
   else if(key < arr[mid]){                // end = mid - 1 left mai jao
        end = mid -1;                      // end = start +1 right mai jao
    }
     
   else if(key > arr[mid]){
       start = mid + 1;
    }
     mid = start + (end-start)/2;
    }
    return ans;
}


int last_occurence(int arr[], int n,int key){
    int start = 0;
    int end = n-1;
    int ans = -1;
    int mid = start + (end-start)/2;

    while(start <= end){
        
      
    if(arr[mid] == key){
        ans = mid;
         start = mid +1;
    }
   else if( key < arr[mid] ){                // end = mid - 1 left mai jao
        end = mid -1;                      // start = mid +1  right mai jao
    }
     
   else if(key > arr[mid]){
       start = mid + 1;
    }
       mid = start + (end-start)/2;
   
    }
    return ans;

}





int main()
{
    int arr[] = {1,2,3,3,5};
   int  index = first_occurence(arr,5,3);
   cout<<index;
    
   int  ind = last_occurence(arr,5,3);
   cout<<ind;
    return 0;
}
*/





                                                     // peak index in a mountain array
/*
int mountain(int arr[],int n){
    int s =0;
    int e = n-1;
    int mid = s+(e-s)/2;

 while(s < e){
   if(arr[mid]  < arr[mid+1]){
     s = mid +1;
   }
   else{
     e = mid ;
   }
   mid = s+(e-s)/2;
 }
 return s;
}


int main(int argc, char const *argv[])
{
  int  arr[] = {0,10,5,2};
  cout<< mountain(arr,4);
    return 0;
}
*/









//                       finding pivot element in an array(index of pivot element)

/*
int pivot(int arr[],int n){
    int start = 0 ;
    int end = n-1;
    int mid = start + (end-start)/2;
   
   while(start < end){
    if(arr[mid] >= arr[0]){
      start = mid + 1;
    }
    else{
        end = mid;
    }
    mid = start + (end-start)/2;
   }
   return start;
}








int main(int argc, char const *argv[])
{
    int arr[] = {7,9,1,2,3};
    cout<<"the index of pivot element is  "<<pivot(arr,5);
    
    return 0;
}
*/






/*

// finding the square root
 long long int sqrtInteger(int n) {
        
        int s = 0;
        int e = n;
        long long int mid = s + (e-s)/2;
        
        long long int ans = -1;
        while(s<=e) {
            
            long long int square = mid*mid;
            
            if(square == n)
                return mid;
            
            if(square < n ){
                ans = mid;
                s = mid+1;
            }
            else
            {
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }
   

 double more_precision(int n, int precision,int tempSolution ){
   double factor = 1;
   double ans = tempSolution ;

   for(int i =0; i<precision;i++){
    factor = factor/10;
      for(double j = ans; j*j < n; j+=factor ){
         ans = j;
      }
   }
    return ans;
 }






   int main()
   {
    int n;
    cin>>n;
    int tempSolution = sqrtInteger(n);
    cout<< more_precision(n,3,tempSolution);

    
    return 0;
   }
   

*/





