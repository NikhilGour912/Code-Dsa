#include<iostream>
using namespace std;
/*
  // making the function to calculate the ( nCr )

int factorial(int n){
    int fact =1;
    for(int i= 1; i<=n;i++){
        fact = fact*i;
    }
    return fact;
}

int nCr(int n, int r){
    int numerator = factorial(n);
    int denomenator = factorial(r)*factorial(n-r);
     return numerator/denomenator ;
}



int main(int argc, char const *argv[])
{
    int n,r;
    cin>>n>>r;
     cout<<"the value of nCr is "<< nCr(n,r);
    return 0;
}
*/









                             // making a function which check wether  a number is prime or not
/*
bool isPrime(int n){
  for(int i= 2;i<n;i++){
    if(n%i == 0){
       return 0;
    }
  }
  return 1;
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
  if(isPrime(n)==1){
    cout<<"it is a prime number";
  }
  else{
    cout<<"not a prime number ";
  }
    
    return 0;
}
*/










              // function to print nth term of an AP
  /*
int AP(int n){
 return 3*n+7;
}
int main(int argc, char const *argv[])
{
  int n;
   cin>>n;
  cout<<AP(n);
  return 0;
}
*/






// function to calculate the no. of set bits
/*
int setBit(int a){
 int count = 0;
   for(int i=1; a!= 0;i++){
     int ans = a&1;
      if(ans == 1){
        count++;
      }
      a = a>>1;
   }
     return count;
}


int main(int argc, char const *argv[])
{
  cout<<"enter the value of a and b"<<endl;
  int a,b;
  cin>>a>>b;
 
   cout<<setBit(a)+setBit(b);
  
  return 0;
}

*/







// function to calculate nth term of the fibonacci series
/*
int fib(int n){
  int a=0;
  int b= 1;
 for(int i =2;i<n;i++){ 
  int sum = a+b;
  a= b;
  b = sum;
 }

return b;
  
}

int main(int argc, char const *argv[])
{
  int n;
  cin>>n;
   cout<<fib(n);
  return 0;
}
*/