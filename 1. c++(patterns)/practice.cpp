#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
  
    int sum =0;
    int prod = 1;
   for(int i =0; i<3;i++){
    int digit = n%10;
     sum = sum + digit;
     prod = prod*digit;
     n = n/10;
   }
   cout<< prod-sum;
    return 0;
}
