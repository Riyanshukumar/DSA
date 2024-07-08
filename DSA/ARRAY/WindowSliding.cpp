#include<iostream>
using namespace std;

/*int maxSum(int arr[], int n, int k){
      
     int max_sum = INT8_MIN;
     for (int i = 0; i < n-k+1; i++)
     {   
        int sum = 0;

        for (int j = i; j < i+k; j++)
        {
            sum += arr[j];
        }
        max_sum = max(max_sum, sum);
     }
          return max_sum;   
          
}*/

int maxSum(int arr[], int n, int k){
    int curr =0;

    for (int i = 0; i < k; i++)
    {
        curr += arr[i];
    }
      
     int ans = curr;
     for (int i = k; i < n; i++)
     {
        curr = curr + arr[i] - arr[i-k] ;
        ans = max(ans, curr);
     }
         
        return ans;
}

int main(){
    int arr[] = {10,5,-2,20,1};

    cout << maxSum(arr,5,3);
}