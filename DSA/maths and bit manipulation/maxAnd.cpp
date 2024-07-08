#include<iostream>
using namespace std;

int maxAnd(int arr[],int n){

    int max_value = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            max_value = max(max_value, arr[i]&arr[j]);
        }
        
    }
    return max_value;
}

int main(){
    int arr[6] = {4, 6, 3, 9, 10, 35};
    cout << maxAnd(arr, 6);

    return 0;
}