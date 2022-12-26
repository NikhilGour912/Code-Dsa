#include<iostream>
using namespace std;
            // declaration and input output 
/*
int main()
{
   char name[20];
   cout<<"enter your name   ";
   cin>>name; 
   name[4] = '\0';
   cout<<"your name is =>  "<<name;
    return 0;
}
*/







                        // making functions to calculate  (length,  to reverse a string,   check palindrome)
char toLowercase(char ch){
    if(ch >= 'a' && ch <='z'){
        return ch;
    }
    else{
        char temp =  ch -'A' + 'a';
        return temp;
    }
}



bool check_palindrome(char a[],int n){
      int s= 0;
      int e = n-1;
      while(s<=e){
        if(toLowercase(a[s]) != toLowercase(a[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
      } 
      return 1;  
}



int Length(char name[]){
    int count =0;
   for(int i= 0; name[i] != '\0';i++){
         count++;
    }  
    return count;
}



void reverse(char name[],int n){
   int s= 0;
   int e = n-1;
    while(s<e){
        swap(name[s],name[e]);
        s++;
        e--;
    }
}




int main()
{
    char name[100];
    cout<<"enter your name  ";
    cin>>name;
    cout<<"length is   "<< Length(name)<<endl;                                    //calculation of length

    reverse(name,Length(name));                                                   // reverse of an string
    cout<<"reversed name is  "<<name<<endl;
    
    cout<<"palindrome or not => "<< check_palindrome(name,Length(name));         // check palindrome
   
    return 0;
}
