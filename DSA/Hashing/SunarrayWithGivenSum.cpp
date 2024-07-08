#include<bits/stdc++.h>
using namespace std;

bool isSum(int arr[], int n, int sum){
    unordered_set<int>h;
    int pre_sum = 0;
    for (int i = 0; i < n; i++)
    {
        pre_sum += arr[i];
        if(pre_sum == sum) return true;

        if(h.find(pre_sum - sum) != h.end())
           return true;

        h.insert(pre_sum);
    }
     return false;
}

int main(){
    int arr[] = {3,5,6,9,1,4};
    cout << isSum(arr,6,10);

    return 0;
}