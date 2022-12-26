#include<iostream>
using namespace std;
#include<bits/stdc++.h>

 void rotate1(vector<int>& nums, int k) {          // TLE maar rha hai {tareeka no. 1}  // using recursion
       // base case
        if(k==0){
            return;
        }
        int size = nums.size();
        int temp = nums[size-1];
        for(int i = size-2; i>= 0; i--){
           nums[i+1] = nums[i];
        }
         nums[0] = temp;
         // recursive call
        rotate1(nums,k-1);
    }


 
 void rotate(vector<int>& nums, int k) {
        
        vector<int>temp(nums.size());
        
        for(int i =0; i<nums.size();i++){
            temp[(i+k)%nums.size()] = nums[i];
        }
        
        nums = temp;
    }



  // checking the array if it is rotated and sorted or not
  bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for(int i = 1; i< n; i++){
           if(nums[i-1]>nums[i])
               count++;
        }
        
        // check for last and 1st element
        if(nums[n-1]>nums[0]){
            count++;
        }
        return count<=1;
    }
 

 vector<int> reverse(vector<int>v){
    int s=0;
    int e = v.size()-1;
    while(s<e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}
          // add array
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {

  int i= n-1;
  int  j=m-1;
    vector<int>ans;
   int carry =0;
    
    while(i>= 0 && j>=0){
      int value1 = a[i];
      int value2 = b[j] ;
      int sum = value1+value2+carry;
 
        carry = sum/10;
        int value = sum % 10;
      ans.push_back(value);
          i--;
          j--;
    }
     // first case (a bach gaya)
    while(i>=0){
      int  sum = a[i] + carry;
         carry = sum/10;
        sum = sum % 10;
      ans.push_back(sum);
          i--;
    }
    //second case (length of j matlab b badi hai )
      while(j>=0){
      int  sum = b[j] + carry;
         carry = sum/10;
        sum = sum % 10;
      ans.push_back(sum);
          j--;
    }
    // third case  (last mai carry bach gayi)
       while(carry !=0){
      int  sum =  carry;
         carry = sum/10;
        sum = sum % 10;
      ans.push_back(sum);
    }
    
   return reverse(ans);
    
}

int main(int argc, char const *argv[])
{
    vector<int>nums = {1,2,3,4,5,6,7};
   rotate(nums,3); 
   
   for(int i: nums){
    cout << i << " ";
   }
 

    return 0;
}
