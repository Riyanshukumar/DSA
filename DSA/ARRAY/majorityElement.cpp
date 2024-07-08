#include<iostream>
using namespace std;

int MajorityEle(int arr[], int n){

   for (int i = 0; i < n; i++)
   {    
    int count = 1;
    for (int j = 0; j < n; j++)
    {
        if(arr[j] == arr[i])
          count ++;
    }
    
      if(count > n/2)
        return i;
   }
    return -1; 
  
}

int main(){

    int arr[] ={8,8,6,6,6,4,6};

    cout << MajorityEle(arr,7);
}