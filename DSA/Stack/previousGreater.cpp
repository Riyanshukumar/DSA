#include<bits/stdc++.h>
using namespace std;

void previousGreater(int arr[], int n){
    stack<int>s;
    s.push(arr[0]);
    cout << "-1 ";
    for (int i = 1; i < n; i++)
    {
        while(s.empty()==false && s.top()<=arr[i]){
            s.pop();
        }
        int pg = (s.empty()==true)?-1:s.top();
        cout << pg << " ";
        s.push(arr[i]);
    }
    
}

/*void previousGreater(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        int j;
        for(j=i-1; j>=0; j--){
            if(arr[j]>arr[i])
            {
                cout << arr[j] << " ";
                break;
            }
        }
        if(j==-1)
          cout << -1 <<" ";
    }
    
}*/

int main() {
    int arr[] = {3, 5, 2, 10, 6, 8, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    previousGreater(arr, n);

    return 0;
}