#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*bool isPair(int arr[], int n, int sum){
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]+arr[j] == sum)
              return true;
        }
        
    }
    return false;
}*/

bool isPair(int arr[], int n, int sum){
    unordered_set<int>h;
    for (int i = 0; i < n; i++)
    {
        if(h.find(sum-arr[i]) != h.end())
             return true;

        else 
          h.insert(arr[i]) ;    
    }
    return false;
}

int main(){
    int arr[]={2,4,3,6,7,5};
    cout << isPair(arr,6,8);

    return 0;
}