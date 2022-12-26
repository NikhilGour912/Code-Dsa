#include<iostream>
using namespace std;
/*                 to print square of stars
int main()
{
  
    int i=1;
   
  while( i<10){
    int j=1;
      while(j<10){
        cout<<'*';
        j++;
      }
      cout<<endl;
      i++;
     
  }
   
    return 0;
}  */






// pattern no. 2(square of no. elements = i)[1111 2222 3333 4444 ]
/*
int main()
{
  int i=1;
  while(i<=3){
    int j=1;
    while(j<=3){
      cout<<i;
      j++;
    }
    cout<<endl;
     i++;
  }
  
  return 0;
}                    */




                    // pattern no. 3(elements = j) and ulta[1234 1234 1234 1234]
/*
int main(int argc, char const *argv[])
{
  int i=1;
  while(i<=4){
    int j=1;
    while(j<=4){
      cout<<j;                     //ulte ke liye     n-j+1
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}
*/




//             pattern no.  4(square counting print karana hai)
/*
int main(int argc, char const *argv[])
{
  int i=0;
  while(i<3){
    int j=1;
    while(j<=3){
      cout<<3*i+j;
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}
*/




// pattern no. 4(new approach)
/*
int main(int argc, char const *argv[])
{
  int i=1;
  int count = 1;
  while(i<=3){
    int j=1;
    while(j<=3){
      cout<<count;
      count++;
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}*/





//       pattern no. 5(triangle star)
/*
int main(int argc, char const *argv[])
{
  int i=1;
  while(i<=4){
    int j=5-i;
    while(j<=4){
      cout<<'*';
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}
*/



// pattern 5 new approach
/*
int main(int argc, char const *argv[])
{
  int n;
  cin>>n;
  int row=1;
  while(row<=n){
    int col= 1;
       while(col<=row){
        cout<<'*';
        col++;
       }
    cout<<endl;
    row++;
    
  }
  
  return 0;
}*/



