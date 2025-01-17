#include<iostream>
using namespace std;

int sum (int arr[], int b, int e){
     int s = 0;
     for (int i = b; i <= e; i++)
     {
        s += arr[i];
     }
      return s;
}

int maxPage(int arr[], int n, int k){
    if(k ==1)
      return sum(arr,0,n-1);

    if(n == 1)
      return arr[0];

    int res = INT8_MAX;  
    for (int i = 1; i < n; i++)
    {
        res = min(res, max(maxPage(arr,i,k-1), sum(arr,i,n-1)));

    }
      return res;
}

int main(){
     int arr[] = {2,4,3,9,10,7,15};

     cout << maxPage(arr,7,3);

  return 0;

}