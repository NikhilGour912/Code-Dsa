#include<iostream>
#include<array>
using namespace std;

             // c++ stl => array



int main(int argc, char const *argv[])
{
    array<int,4> a = {1,2,3,4};
   
   int size = a.size();                                 // for no. of elements 
   cout<<"the size is  "<< size<<endl;

   for(int i=0 ;i<size ;i++){                           // traverse
    cout<< a[i]<<"  ";
   }
     cout<<endl;
   cout<< a.at(3) <<endl;                              // element at a position

    cout<<"empty or not  "<< a.empty()<< endl ;       // empty or not

  cout<< "first element "<< a.front()<<endl;          // getting first and last element 
  cout<< "last element "<< a.back()<<endl;
    return 0;
}
