#include<iostream>
using namespace std;
#include<vector>
                 // printing the reverse of an array
/*
vector<int> reverse(vector<int> v){
  int s = 0;
  int e = v.size() -1;
   while(s <= e){
    swap(v[s],v[e]);
    s++;
    e--;
   }
 return v;
}

void print(vector<int> v){
    for(int i=0;i< v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}



int main()
{
    vector <int> v;
     v.push_back(6);
     v.push_back(5);
     v.push_back(4);
     v.push_back(3);
     v.push_back(2);
     v.push_back(1);

     vector<int> ans = reverse(v);
     cout<<"printing reverse array "<<endl;
     print(ans);
    return 0;
}
*/









                          //                   merge an array made by two array 
/*
void merge(int arr1[],int n,int arr2[],int m,int arr3[]){
    int i=0;
    int j=0;
    int k=0;
    while(i < n && j <m){
        if(arr1[i]<arr2[j]){
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else{
           arr3[k] = arr2[j];
           k++;
           j++; 
        }
    }
    while(i<n){                            // copy first array ke remaining elements
        arr3[k] = arr1[i];
        k++;
        i++;
    }
     while(j<m){                          // copy second array ke remaining elements
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}


void print(int arr3[],int n){
    for(int i=0;i<n;i++){
        cout<<arr3[i]<<" ";
    }
}







int main(int argc, char const *argv[])
{
    int arr1[] = {2,4,6,8,9};
    int arr2[] = {1,3,4};

    int arr3[8] = {0};
    merge(arr1,5,arr2,3,arr3);
    print(arr3,8);
    return 0;
}

*/














                     