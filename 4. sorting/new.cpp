/*
class Solution {

private:
    bool check_equal(int a[26],int b[26]){
        for(int i=0;i<26;i++){
            if(a[i] != b[i]){
                return 0;
            }
        }
        return 1;
    }
public:
    bool checkInclusion(string s1, string s2) {
        //character count array
      int count1[26] = {0};
      for(int i=0;i<s1.length();i++){
        int index =  s1[i]-'a';
          count1[index]++;
      }
        //traverse s2 string in window size of s1 length
       
        int i=0;
        int windowSize = s1.length();
        int count2[26] = {0};
        
        //running for the first window
        while(i<windowSize){
          int index = s2[i]-'a';
            count2[index]++;
            i++;
        }
        if(check_equal(count1,count2)){
            return 1;
        }
        
        // aage windows ko process karo
       while(i < s2.length()){
           // new index ko add karo
         int newIndex = s2[i]-'a';
         count2[newIndex]++;
          
           
           // old index ko remove karo
          int oldChar = s2[i-windowSize];
           int oldIndex = oldChar - 'a';
           count2[oldIndex]--;
       }
        if(check_equal(count1,count2)){
            return 1;
        } 
       return 0;   
    }
};
*/