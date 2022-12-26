#include<iostream>
#include<map>                                         // standard library
using namespace std;

int main(int argc, char const *argv[])
{
    map<int,string> m;

 m[1] = "katappa";
 m[13] = "bahubali";
 m[2] = "mahesmati";

 // m.insert((5,"gobar")); 

cout<<"before erase ";
 for(auto i : m){
    cout<<i.first<<" "<<i.second<<endl;
 }

cout<<"finding 13 -> "<<m.count(13)<<endl;

cout<<"after erase ";
 m.erase(13);
 for(auto i : m){
    cout<<i.first<<" "<<i.second<<endl;
 }
 
 auto it = m.find(1);
 for(auto i = it ;i!=m.end(); i++){
    cout<<(*i).first<<endl;
 }




    return 0;
}
