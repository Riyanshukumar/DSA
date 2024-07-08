#include<iostream>
using namespace std;

bool isFeasible(int arr[], int n, int k, int ans){
    int req = 1, sum = 0;

    for (int i = 0; i < n; i++)
    {
        if(sum+arr[i] > ans){
            req++;
            sum = arr[i];
        }
        else 
           sum += arr[i];
    }
      return (req <= k);
}

int minPage(int arr[], int n, int k){
    int sum = 0, mx = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        mx = max(mx,arr[i]);
    }
    int low = mx, high = sum, res = 0;

    while (low <= high)
    {
        int mid = (low+high)/2 ;
        if(isFeasible(arr,n,k,mid)){
            res = mid;
            high = mid -1;
        }
        else 
           low = mid+1;
    }
     return res;
}

int main(){

    int arr[] = {2,4,37,8,9,14,17,29,35,15};

    cout << minPage(arr,10,3);

    return 0;
}