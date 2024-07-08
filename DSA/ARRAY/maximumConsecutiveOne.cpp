#include<iostream>
using namespace std;

/*int maxConsecutiveOne(bool arr[], int n){
    int res = 0;

    for (int i = 0; i < n; i++)
    {
        int curr = 0;
        for (int j = i; j < n; j++)
        {
            if(arr[j] == 1) curr++;

            else break;
        }
         res = max(res,curr);
    }
       return res;
      
} */

int maxConsecutiveOne(bool arr[], int n){
      
    int ans = 0, curr = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == 1)
           curr++;

        else {
           ans = max(ans,curr);
           curr = 0;
        }      
    }
       
      return max(ans,curr);
}

int main(){

    bool arr[] = {0,1,1,0,1,1,1};
    cout << maxConsecutiveOne(arr,7);

    return 0;
}