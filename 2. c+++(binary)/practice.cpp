#include<iostream>
#include<math.h>
using namespace std;

// conversion of decimal to binary

int main(int argc, char const *argv[])
{
   int n;
   cin>>n;
   int ans =0;
   int i =0;
   while(n != 0){
     int bit = n&1;
     int ans = bit*pow(10,i)+ans;
     n=n>>1;
     i++;
   }
   cout<<ans;
    return 0;
}
