#include<bits/stdc++.h>
using namespace std;

/*int maxArea(int arr[], int n){
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int curr = arr[i];
        for(int j=i-1; j>=0; j--){
            if(arr[j]>=arr[i]) curr += arr[i];
            else break;
        }
        for(int j=i+1; j<n; j++){
            if(arr[j]>=arr[i]) curr += arr[i];
            else break;
        }

        ans = max(ans, curr);
    }
    return ans;
}*/

int maxArea(int arr[], int n){
    stack<int>s;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        while(s.empty()==false && arr[s.top()]>=arr[i]){
            int tp = s.top();
            s.pop();
            int curr = arr[tp] * (s.empty()?i:(i-s.top()-1));
            ans = max(ans, curr);
        }
        s.push(i);
    }
    while(s.empty()==false){
        int tp = s.top();
        s.pop();
        int curr = arr[tp] * (s.empty()?n:(n-s.top()-1));
        ans = max(ans, curr);
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = maxArea(arr, n);
    cout << "Maximum area: " << result << endl;

    return 0;
}