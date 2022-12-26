#include<iostream>
using namespace std;
#include<math.h>
   // conversion of decimal to binary
   /*
int main()
{
 
    int n;
    cin>>n;

    int ans=0;
    int i=0;
    while(n !=0){
        int bit = n & 1;                     // the bit will come out to be reverse
         ans= (bit * pow(10,i))+ans;            //prints our ans in reverse direction
        n = n>>1;
        i++;
    }
    cout<<"answer is "<<ans<<endl;
   return 0;  

}
*/





//           conversion of binary to decimal
/*
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int i=0;
    int ans=0;
    while(n != 0){
        int digit = n%10;
        if(digit==1){
        ans= ans+pow(2,i);}
        n=n/10;
        i++;
    }
    cout<<ans;

    
    return 0;
}
*/







    