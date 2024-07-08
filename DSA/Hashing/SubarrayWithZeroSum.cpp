#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*bool isZero(int arr[], int n){
    for(int i=0; i<n; i++){
        int curr_sum = 0;
        for(int j=i; j<n; j++){
          curr_sum += arr[j];
            if(curr_sum==0)
              return true;
        }
    }
    return false;
}*/

bool isZero(int arr[], int n){
    unordered_set<int>h;
    int pre_sum = 0;
    for (int i = 0; i < n; i++)
    {
        pre_sum += arr[i];
        if(h.find(pre_sum)!=h.end())
          return true;

        if(pre_sum == 0)
           return true;

        h.insert(pre_sum);     
    }
    return false;
}

int main(){
    int arr[] = {2,4,3,-3,1,-2};
    cout << isZero(arr,6);

    return 0;
}