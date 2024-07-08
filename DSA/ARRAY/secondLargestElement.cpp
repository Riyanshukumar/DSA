#include<bits/stdc++.h>
using namespace std;

int getLargest(int arr[], int n){
    int largest = arr[0];

    for (int i = 1; i < n; i++)
    {
        if(arr[i]>largest){
            largest = arr[i];
        }
           
    }
    return largest;
}

pair<int,int> secondLargest(int arr[], int n){

    int largest = getLargest(arr, n);

    int ans = -1;

    for (int i = 0; i < n; i++)
    {
        if(arr[i]!=largest){
           
            if(ans == -1)
              ans = i;

            else if (arr[i]>arr[ans])
                ans = i;          
        }
    }
    pair<int,int>result = {ans, arr[ans]};
    return result;
}


int main(){

    int arr[3] = {10, 10, 10};
    pair<int,int>answer = secondLargest(arr, 3);

    cout << "the index of 2nd largest element is "<<answer.first << " and the element is "<< answer.second;

    return 0;
}