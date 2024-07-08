#include<iostream>
using namespace std;

int maxSum(int arr[], int n){
     
     int sum = arr[0];
     int ans = arr[0];

     for (int i = 1; i < n; i++)
     {
        sum = max(arr[i], sum+arr[i]);
        ans = max(ans, sum);
     }
     
     return ans;
}

int main(){

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    cout << maxSum(arr, n);
  
  return 0;

}


/*int maxSum(int arr[], int n){
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        int temp = 0;
        for (int j = i; j < n; j++)
        {
            temp += arr[j];
            sum = max(sum, temp);
        }
        
    }
    return sum;

}  */
