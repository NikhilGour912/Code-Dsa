#include<iostream>
using namespace std;
         // type- 1[   *  ** *** *** ]
// opposite triangle of stars[printing the spaces]
/*
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        //space
          int space= n-row;
     while(space){
        cout<<" ";
        space--;
     }
     // print star
       int col=1;
     while(col<=row){
        cout<<"*";
        col++;
     }
     cout<<endl;
     row++;
    }
    return 0;
}
*/


//   type -2 [**** *** ** *]
/*
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        // printing the space
        int space = i-1;
        while(space){
            cout<<" ";
            space--;
        }
    //printing the stars
    int count=n-i+1;
    while(count){
        cout<<"*";
        count--;
    }
    cout<<endl;
    i++;
    }
    return 0;
}
*/




//    type - 3
/*
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int i=1;
     while(i<=n){
        
        // print space
      int space = n-i;
      while(space){
        cout<<" ";
        space--;
      }
      // print first triangle
      int j=1;
      while(j<=i){
        cout<<j;
        j++;
      }
      // print second triangle
        int k=1;
        int value = i-1;
       while(k<i){
        cout<<value;
        value--;
        k++;
       }
      cout<<endl;
      i++;
     }
        
    return 0;
}
*/


//         homework problem




