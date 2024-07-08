#include<iostream>
#include<bits/stdc++.h>
using namespace std;

set<int> TwoOdd(int arr[], int n){
    set<int>st ;

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if(arr[j] == arr[i])
               count++;
        }
        if(count%2 != 0)
          st.insert(arr[i]);
    }
    return st;
}

int main(){
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    set<int>result = TwoOdd(arr,n);

    for(int i : result){
         cout<< i << " ";
    }
   return 0;
    
}