#include<iostream>
#include<vector>                                                      // #include <bits/stdc++.h>                                 
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v;

    vector<int> a(5,1);                                  // 2nd way to declare a vactor (5- size , 1- initialise all with 1)
   
  vector<int> last(a);
 cout<< " printig the elements of last    ";             // creating a vecto last and printing the elements of a in it 
   for(int i : last){
    cout<< i<<"  "; 
   }
 cout<<endl;

   v.push_back(1);
cout<<"the capacity is =>   "<<v.capacity()<< endl;          // capacity - memory alloatment
                                                            //  agar capacity se jyada element daalenge to dynamicaly capacity double ho jayegi
   v.push_back(2);
cout<<"the capacity is =>   "<<v.capacity()<< endl;         
                                        
   v.push_back(3);                                          // v.push_back => for entering a element
cout<<"the capacity is =>   "<<v.capacity()<< endl;

 cout<<"size is =>  " << v.size()<<endl;

  cout<< v.at(2)<<endl;
  cout<< "at front   "<<v.front()<<endl;
  cout<< "at last    "<<v.back()<<endl;

 cout<< "before pop   ";
   for(int i : v){                                    //  pop_back for deleting the last element 
    cout<< i<<"  ";
   }
cout<<endl;
v.pop_back();

cout<< "after pop     ";
   for(int i : v){
    cout<< i<<"  ";
   }
cout<<endl;

   cout<< "size before clear    "<<v.size()<<endl;
      v.clear();
   cout<<" size after clear     "<<v.size()<<endl;          // v.clear to clear all the elements 
cout<<"capacity after clear   "<<v.capacity()<<endl;        //   => capacity remains same



    return 0;
   
}