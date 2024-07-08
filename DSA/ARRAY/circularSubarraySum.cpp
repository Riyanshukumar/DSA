#include<iostream>
using namespace std;

/*int maxCircularSum(int arr[], int n){
    int max_sum = arr[0];

    for (int i = 0; i < n; i++)
    {
        int curr_max = arr[i];
        int curr_sum = arr[i];

        for (int j = 1; j< n; j++)
        {
            int idx = (i+j)%n ;
            curr_sum += arr[idx];

            curr_max = max(curr_max,curr_sum);
        }
        max_sum = max(max_sum, curr_max);
    }
    return max_sum;
}*/

int maxSum(int arr[], int n){
    
     int max_sum = arr[0];
     int curr_sum = arr[0];

     for (int i = 1; i < n; i++)
     {
        curr_sum = max(arr[i], curr_sum+arr[i]);
        max_sum = max(max_sum, curr_sum);
     }
     
      return max_sum;
}


int maxOverallSum(int arr[], int n){
      
      int normal_sum = maxSum(arr,n);
      if(normal_sum < 0)
         return normal_sum;

         int arr_sum = 0;

      for (int i = 0; i < n; i++)
      {
        arr_sum += arr[i];
        arr[i] = -arr[i];
      }

       int circularSum = arr_sum + maxSum(arr,n) ;

       return max(normal_sum, circularSum);  

}

int main(){

    int arr[5] = {4,-8,3,4,9};

    cout << maxOverallSum(arr,5);
}