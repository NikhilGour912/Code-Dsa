#include<iostream>
using namespace std ;

//   pattern no. 5(b)[triangle counting]
/*
int main(int argc, char const *argv[])
{
    int n ;
    cin>>n;
    int count =1;
    int i=1;
     while(i<=n){
        int j=1;
          while(j<=i){
            cout<<count;
            count++;
            j++;
          }
      cout<<endl;
      i++;
     }
     
    return 0;
}
*/





//  pattern no. 6[triangle last = first of second 1  23  345 4567 ]
/*
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int i=1;
     while(i<=n){
        int j=1;
        while(j<=i){
            cout<<i+j-1;
            j++;
        }
        cout<<endl;
        i++;
     }
    return 0;
}
*/


//  pattern no 6 new approach
/*
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int i=1;
    
     while(i<=n){
        int j=1;
        int value= i;
        while(j<=i){
            cout<<value;
            value++;                           // for ulta value--
            j++;                              
            }
        cout<<endl;
        i++;
     }
    return 0;
}*/                                          //      while(j<=n+1-i){
                                            //   cout<<n+j-i;
                                            //       j++;
                                            // }
     



//  pattern no. 6(b)[triangle 1 21 321 4321 - ulta]
/*
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int i=1;
    
     while(i<=n){                               
        int j=1;
        while(j<=i){
            cout<<i-j+1;
            j++;
        }
        cout<<endl;
        i++;
     }
    }
    */





//  pattern no. 7(square)[ABCD ABCD ABCD ABCD]
/*
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int i=1;
    
     while(i<=n){                               
        int j=1;
        char ch = 'A';
        while(j<=n){                   
            cout<<ch;                  // 2nd approach 'A'+j-1
            ch++;                           
            j++;
        }
        cout<<endl;
        i++;
     }
    }
    */



      //pattern no. 8  [AAA BBB CCC]
      /*
      int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int i=1;
    
     while(i<=n){                               
        int j=1;
        char ch = 'A'+i-1;
        while(j<=n){                   
            cout<<ch;                  //     ch = 'A'+i-1
             j++;                                
        }
        cout<<endl;
        i++;
     }
    }
    */



   // pattern no. 10[ABC BCD CDA]
   /*
         int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int i=1;
    
     while(i<=n){                               
        int j=1;
        char ch = i+j+ 'A'-2;
        while(j<=n){                   
            cout<<ch;
            ch++;                  //     ch = i+j+'A'-2
             j++;                                
        }
        cout<<endl;
        i++;
     }
    }
    */





// pattern no.11[a ab bcd cde]
/*
  int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int i=1;
    
     while(i<=n){                               
        int j=1;
        char ch = i+j+ 'A'-2;
        while(j<=i){                   
            cout<<ch;
               ch++;            
             j++;                                
        }
        cout<<endl;
        i++;
     }
    }
    */


   // pattern no. 11 opp[d cd bcd abcd]
   /*
   int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int i=1;
    
     while(i<=n){                               
        int j=1;
        char ch = 'D'-i+j;            // 'D'+j-i
        while(j<=i){                   
            cout<<ch;
               ch++;            
             j++;                                
        }
        cout<<endl;
        i++;
     }
}
*/
