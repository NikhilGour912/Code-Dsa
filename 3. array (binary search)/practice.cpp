#include<iostream>
using namespace std;

/*     finding the unique element in an array(and 2nd approach - by XOR)
int findUnique(int *arr, int size)
{

    for (int i = 0; i < size; ++i)
    {
        int j = 0;

        for (; j < size; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                break;
            }
        }

        if (j == size)
        {
            return arr[i];
        }
    }
}

int main(int argc, char const *argv[])
{
   int arr[] = {2,2,3,4,3};
   cout<<findUnique(arr,5);
    return 0;
}
*/





   int Duplicate(int arr[],int n){
	   for(int i=0;i<n;i++){
	      if(arr[i]==i){
	           return i;
	      }
	   }
   }


int main(int argc, char const *argv[])
{
   int arr[]={15,2,42,17,4};
    cout<<Duplicate(arr,5);
    return 0;
}
