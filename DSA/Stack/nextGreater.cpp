#include<bits/stdc++.h>
using namespace std;

/*void nextGreater(int arr[], int n){
    for(int i=0; i<n; i++){
        int j;
        for(j=i+1; j<n; j++){
            if(arr[j]>arr[i])
            {
               cout << arr[j] <<" ";
               break;
            }
        }
        if(j==n)
          cout << -1 << " ";
    }
}*/

void nextGreater(int arr[], int n){
    stack<int>s;
    s.push(arr[n-1]);
    cout << -1 << " ";

    for(int i=n-2; i>=0; i--){
        while (s.empty()==false && s.top()<=arr[i])
        {
            s.pop();
        }
        int nextGr = (s.empty())?(-1):(s.top()) ;
        cout << nextGr <<" ";
        s.push(arr[i]);
    }
    //reverse order
}

int main() {
    int arr[] = {5, 15, 10, 8, 6, 12, 9, 18};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    nextGreater(arr, n);
    
    return 0;
}