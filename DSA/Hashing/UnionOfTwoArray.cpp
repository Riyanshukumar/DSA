#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int unionCount(int a[], int m, int b[], int n){
     unordered_set<int> h(a,a+m);

     for (int i = 0; i < n; i++)
     {
        h.insert(b[i]);
     }
         return h.size();
}

int main(){

    int arr[] = {10,30,40,50};
     int brr[] = {20,40,60};

     cout << unionCount(arr,4,brr,3);

     return 0;
}