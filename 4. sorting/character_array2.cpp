#include<iostream>
using namespace std;
                   // function to calculate maximum occuring character
 
 char getmax(string s){
    int arr[26] = {0};
    for(int i=0; i<s.length();i++){
        char ch = s[i];
        if(ch >= 'a' && ch<= 'z'){
           int number = ch - 'a';
            arr[number]++; 
        }
        else{
           int number = ch-'A';
           arr[number]++;
        }
    }
     int maxi =-1;
     char ans = 0;
    for(int i=0; i< 26;i++){
      if(maxi < arr[i]){
        ans = i;
       maxi = arr[i];
      }
     }

     char finalans = 'a' + ans;
     return finalans;
    

 }

 
int main()
{
    string s;
    cin>>s;
    cout<<getmax( s);
    
    return 0;
}
