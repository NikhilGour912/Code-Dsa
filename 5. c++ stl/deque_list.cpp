#include<iostream>
#include<deque>                                         // standard library
using namespace std;
/*
int main()
{
    deque<int> d;
 d.push_back(1);
 d.push_front(2);

 for(int i : d){
    cout<< i<<" ";
 }
cout<<endl;
 // d.pop_front();

cout<<"printing first element =>  "<<d.at(1)<<endl;

 cout<<"first => "<<d.front()<<endl;
 cout<<"last => "<<d.back()<<endl;

cout<<"empty or not  "<<d.empty()<<endl;

cout<<"before erasing  ";
 for(int i:d){
    cout<<i<<" ";
 }                                                    // using the erase function to erase elements of a range 
cout<<endl;
 d.erase(d.begin(),d.begin()+1);                       // d.begin() - iterator to point towards the  first element

 cout<<"after erasing  ";
 for(int i: d){
  cout<<i<<" ";
 }
    return 0;
}
*/







                  //  using the list
#include<list>

int main(int argc, char const *argv[])
{
   list<int> l;

list<int> n(5,1);
for(int i:n){
   cout<<i<<" ";
 } 

 cout<<endl;
   l.push_back(1);
   l.push_front(2);

 for(int i:l){
   cout<<i<<" ";
 } 
cout<<endl;
 
 cout<<"before erasing  ";
 for(int i:l){
   cout<<i<<" ";
 } 
 cout<<endl;
l.erase(l.begin());
  cout<<"after erasing  ";
  for(int i:l){
   cout<<i<<" ";
 } 

   return 0;
}

