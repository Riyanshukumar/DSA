#include<iostream>
using namespace std;

/*int maxEvenOdd(int arr[], int n){
    int ans =1;

    for (int i = 0; i < n; i++)
    {
        int curr = 1;
        for (int j = i+1; j < n; j++)
        {
            if((arr[j] % 2 == 0 && arr[j-1] % 2 != 0)||(arr[j] % 2 != 0  && arr[j-1] % 2 == 0))
              curr++;

            else
               break;    
        }
        ans = max(ans,curr);
    }
    return ans;

}*/
//kadane's algorithm

int maxEvenOdd(int arr[], int n){
      int ans = 1;
      int curr = 1;

      for (int i = 1; i < n; i++)
      {
        if((arr[i]%2 == 0 && arr[i-1]%2 != 0)||(arr[i]%2 != 0 && arr[i-1]%2 == 0)){
            curr++;
            ans = max(ans,curr);
        }
        else 
           curr = 1;
          
      }
      return ans;
}

int main(){
    int arr[6] ={5,10,20,6,3,8};

    cout << maxEvenOdd(arr,6);

    return 0;
}