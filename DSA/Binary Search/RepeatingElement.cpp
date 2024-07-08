#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*int repeating(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
    {
        if(arr[i] == arr[j])
           return arr[i] ;
    }
    
    }
      return -1;
} */

/*int repeating(int arr[], int n){
       sort(arr,arr+n);
       
       for (int i = 0; i < n-1; i++)
       {
          if(arr[i]==arr[i+1])
              return arr[i];
       }
        return -1;      
}  */

int repeating(int arr[], int n){
    bool temp[n-1] = {false};

    for (int i = 0; i < n; i++)
    {
        if(temp[arr[i]]) 
           return arr[i];

        temp[arr[i]] = true;   
    }
     
}


int main(){

     int arr[] = {2,0,4,3,1,0,5,0};
     cout << repeating(arr, 8);

     return 0;
}