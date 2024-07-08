#include<bits/stdc++.h>
using namespace std;

int checkBit(int num, int arr[], int n){
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if((num & arr[i]) == num){
           count++;
        }
    }
    return count;
    
}

int MaxAnd(int arr[], int n){
    int ans = 0;
    int count;
    for (int bit = 31; bit >= 0; bit--)
    {
         count = checkBit(ans|(1 << bit),arr,n);

        if(count >= 2){
           ans = (ans|(1 << bit)) ;
        }
    }
    return ans;
}

int main(){
    int arr[6] = {4, 6, 3, 9, 10, 35};
    cout << MaxAnd(arr, 6);

    return 0;
}