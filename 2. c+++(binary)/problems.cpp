#include<iostream>
using namespace std;
#include<math.h>
           // program to print the reverse integer
/*
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int ans =0;
     for(int i=0;n!=0;i++){
        int a= n%10;
          ans= ans*10+a;
        //    
        
        //    }
          n=n/10;
     }
     cout<<ans;
    return 0;
}
*/





//          program to find the complement of base 10 integer
/*
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int m=n;
    
     int mask=0;
     if(n==0){
        return 1;
     }
      while(n != 0){
       mask = (mask<<1) | 1;
        m = m>>1;
      }
      int ans = (~n) & mask ;
      cout<<ans;
    return 0; 
}
*/





                    //   to check the number is  power of two or not
/*
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int count;
     for(int i=0;i<=30;i++){
        int ans = pow(2,i);
         if(ans == n){
            cout<<"the number is a power of two ";
              count++;
              break;
         }
        
     }
}
*/






//  to check the power of two (new method)
/*
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
      int ans=1;
       for(int i=0;i<=30;i++){
          if(ans == n){
            cout<<"the no. is power of two ";
          }
        if(ans < INT8_MAX/2 )
        ans = ans*2;
       }
      
    return 0;
}
*/

