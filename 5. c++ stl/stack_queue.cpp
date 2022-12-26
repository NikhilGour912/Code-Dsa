#include<iostream>
#include<stack>                                         // standard library
using namespace std;
                           //   stack
/*
int main()
{
   stack<string> s;

   s.push("standard");
   s.push("temperate");
   s.push("library");
    
   cout<<s.top()<<endl;                         // s.top() for top element
   
   s.pop();
cout<<s.top()<<endl;

cout<<"size is => "<<s.size()<<endl;

cout<<"empty or not => "<<s.empty();

    return 0;
}
*/







/*                      // queue (line)
#include<queue>
int main()
{
    queue<string> q;

   q.push("standard");
   q.push("temperate");
   q.push("library");
cout<<"size before pop  "<<q.size()<<endl;
  cout<<"first element => "<<q.front()<<endl;
 q.pop();
 cout<<"first element after pop => "<<q.front()<<endl;
 cout<<"size after pop  "<<q.size()<<endl;

    return 0;
}
*/











                             // priority queue
/*
#include<queue>
int main(int argc, char const *argv[])
{
    priority_queue<int> maxi;             // max heap
 maxi.push(3);
 maxi.push(2);
 maxi.push(5);
 maxi.push(1);

int n= maxi.size();
 for(int i=0;i<n;i++){
    cout<<maxi.top()<<" ";
    maxi.pop();
 }
cout<<endl;

priority_queue<int,vector <int>,greater <int> >mini;          // min heap
 mini.push(3);
 mini.push(2);
 mini.push(5);
 mini.push(1);

int m= mini.size();
 for(int i=0;i<n;i++){
    cout<<mini.top()<<" ";
    mini.pop();
 }
 cout<<endl;

 cout<<"empty or not => "<<mini.empty()<<endl;

    return 0;
}
*/
