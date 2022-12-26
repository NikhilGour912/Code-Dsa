#include<iostream>
#include<set>                                         // standard library
using namespace std;

int main()
{
   set<int> s;
   s.insert(5);
   s.insert(5);
   s.insert(0);                  // all elements will come only once and will be sorted
   s.insert(6);
   s.insert(1);

   for(auto i:s){               // printing all the elements
    cout<<i<<" ";
   }
//   cout<<endl;
//    s.erase(s.begin());         //s.erase to erase a element of a range 

//    for(auto i:s){
//     cout<<i<<" ";
//    }
 cout<<endl;

 set<int> ::iterator it = s.begin();
 it++;

 s.erase(it);

 for(auto i:s){
    cout<<i<<" ";
 }
cout<<endl;

cout<<"5 is present or not -> "<<s.count(5)<<endl;         //s.count()  for checking that element is present or not

set<int> ::iterator itr = s.find(5);

for(auto it= itr;it != s.end();it++){
    cout<<*it<<" ";
}
cout<<endl;









    return 0;
}
