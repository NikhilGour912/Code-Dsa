#include<iostream>
#include<algorithm>
#include<vector>                                         // standard library
using namespace std;

int main()
{
  vector<int> v;
v.push_back(3);
v.push_back(2);
v.push_back(1);
v.push_back(4);
 
 cout<<"finding 6 -> "<<binary_search(v.begin(),v.end(),6)<<endl;

 cout<<"lower bound -> "<<lower_bound(v.begin(),v.end(),2)- v.begin()<<endl;
 cout<<"upper bound -> "<<upper_bound(v.begin(),v.end(),3)- v.begin()<<endl;

 int a= 5;
 int b=4;
 cout<<"max -> "<<max(a,b)<<endl;
 cout<<"min -> "<<min(a,b)<<endl;

 swap(a,b);
 cout<<"a -> "<<a<<endl;

 string s= "abcd";
 reverse(s.begin(),s.end());
 cout<<"string => "<<s<<endl;

 rotate(v.begin(),v.begin()+1,v.end());
 cout<<"after rotate "<<endl;
 for(int i:v){
    cout<<i<<" ";
 }


   
    return 0;
}
