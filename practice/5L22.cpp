#include<iostream>
using namespace std;
#include<bits/stdc++.h>

 // length of a string
 // reverse of a string
         // check palindrome
 char toLowerCase(char ch){
    if(ch>='a' && ch<= 'z'){
        return ch;
    }
    else{
        char temp = ch -'A' + 'a';
        return temp;
    }
 }
  // checking that a character is valid or not
 bool valid(char ch){
        if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')||(ch>='0' && ch<='9')){
            return 1;
        }
         else{
             return 0;
         }
    }


bool checkPalindrome(char ch[],int n){
    int s = 0;
    int e = n-1;
    while(s < e){
        if(toLowerCase(ch[s]) != toLowerCase(ch[e])){
         return false;}
         else{
            s++;
            e--;
         }
    }
    return true;
}




        // maximum occuring character
 char getMaxOccuringChar(string str)
    {
       int arr[26] = {0};
       for(int i=0; i<str.length();i++){
           int num = str[i] - 'a' ;
           arr[num]++;
       }
       
       int max = -1;
       int Index = -1;
       for(int i =0; i< 26; i++){
           if(arr[i]>max){
               max = arr[i];
               Index = i;
           }
       }
        return Index + 'a';
    }


      // valid palindrome(approach no. 2 => isalnum approach)
            // string contains special characters and uppercase characters
bool checkPalindrome(string s)
{
    int i = 0;
    int j = s.length()-1;
    
    while(i<=j){
        if(isalnum(s[i])==0)
            i++;
        else if(isalnum(s[j])==0)
            j--;
        else if(toLowerCase(s[i]) != toLowerCase(s[j]) ){
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}




            // replace spaces with @40 (1st approach)
string replaceSpaces(string &str){
	string temp  = "";
     for(int i =0;i<str.length();i++){
         if(str[i]==' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
         }
         else{
            temp.push_back(str[i]);
         }
     }
    return temp;
}



        // replace spaces with @40 (2nd approach)

// just using inbuilt functions like erase and insert 
// str_name.erase(index,no_of_char_to_remove)
// insert(index,no_of_char_to_insert,char_to_insert)

string replaceSpaces(string &str){
	 // string str_to_replace = "@40" ;

    for(int i = 0 ; i <str.length() ; i++){

        if(str[i] == ' '){

            str.erase(i,1) ;

           str.insert(i++,1,'@') ;

           str.insert(i++,1,'4') ;

            str.insert(i++,1,'0') ;
        }
    }
    return str;
}





       //  Remove all occurences in a substring
 string removeOccurrences(string s, string part) {
        while(s.length() != 0 && s.find(part)< s.length()){
            s.erase(s.find(part),part.length());
            
        }
        return s;
    }





    // permutation in a string
class Solution {
private:
   bool checkEqual(int count1[26],int count2[26]){
       for(int i=0; i<26; i++){
           if(count1[i] != count2[i]){
               return 0;
           }
       }
       return 1;
   }
public:
    bool checkInclusion(string s1, string s2) {
        // character count array
        int count1[26] = {0};
        for(int i=0; i<s1.length();i++){
            int index1 = s1[i] - 'a';
            count1[index1]++;
        }
        
    // traverse s2 string in window  of size s1.length ans compare
        int i = 0;
        int windowSize = s1.length();
    
        // running for 1st window
        int count2[26] = {0};
        while(i<windowSize && i<s2.length()){
            int index2 = s2[i] - 'a';
            count2[index2]++;
            i++;
        }
        
        if(checkEqual(count1,count2)){
            return 1;
        }
        // aage window process karo
        while(i< s2.length()){
            // new ko add kar denge
            char newChar = s2[i];
            int newIndex = newChar - 'a';
            count2[newIndex]++;
             // purane ko hata denge
            char oldChar = s2[i-windowSize];
            int oldIndex = oldChar - 'a';
            count2[oldIndex]--;
              i++;
             if(checkEqual(count1,count2))
               return 1;
        }
        return 0;
    }
};











            // string compression
 int compress(vector<char>& chars) {
       int i =0;
       int ansIndex = 0;
       int n = chars.size();
        
        while(i<n){
          int j = i+1;
            while(j<n && chars[i]==chars[j]){
                j++;
            }
            // loop se bahar jab aayenge jab
            // poora loop traverse kar liya ho
            // ha dusra character aa gya ho
            
            // old character store kar lo
            chars[ansIndex++] = chars[i];
            
            // for storing the count
            int count = j-i;
            if(count>1){
                string cnt = to_string(count);
                for(char ch: cnt){
                    chars[ansIndex++] = ch;
                }
            }
            i = j;
        }
        return ansIndex;
 }






                                 // Remove all adjecent duplicates
 string removeDuplicates(string s) {
        vector<char>v;
        for(int i=0;i<s.length();i++)
        {
            if(v.size()!=0 && s[i]==v.back())
            {
                v.pop_back();
            }
            else v.push_back(s[i]);
        }
        string ans="";
        for(auto &i:v)
            ans+=i;
        return ans;  
    }
 