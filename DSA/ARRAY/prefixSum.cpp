#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*int getSum(int arr[], int st, int end){
       int sum = 0;
       for (int i = st; i <= end; i++)
       {
         sum += arr[i];
       }
       
    return sum;
}*/

/*int PrefixSum(int arr[], int k){
     int sum = 0;
     for (int i = 0; i < k; i++)
     {
        sum += arr[i];
     }
     return sum;
}*/
int ps[6];

int getSum(int arr[], int st, int end){
    if(st == 0)
        return ps[end];

    return ps[end]-ps[st-1] ;    
}

int main(){

     int arr[] = {2,8,3,9,6,4};
     int n = 6;

   ps[0] = arr[0];

  for (int i = 0; i < n; i++)
  {
    ps[i] = ps[i-1] + arr[i];
}

     cout << getSum(arr,2,5);

   return 0;
}