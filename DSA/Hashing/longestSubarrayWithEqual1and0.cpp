#include<bits/stdc++.h>
using namespace std;

/*int longSub(int arr[], int n){
    int ans = 0;
    for(int i=0; i<n; i++)
    {    int c0 = 0, c1 = 0;
          for (int j = i; j < n; j++)
          {
             if(arr[j]==0) c0++;
             else c1++;

             if(c0 == c1)
               ans = max(ans, c0+c1);
          }
    }
      return ans;
}*/

int longSub(int arr[], int n){
      for(int i=0; i<n; i++){
            if(!arr[i])
              arr[i] = -1;
      }
      unordered_map<int,int>m;
      int ans = 0, pre_sum = 0;

      for (int i = 0; i < n; i++)
      {
           pre_sum += arr[i];
           if(pre_sum == 0) 
             ans = i+1;

          if(m.find(pre_sum) == m.end())
             m.insert({pre_sum, i});

          if(m.find(pre_sum) != m.end())     
             ans = max(ans, i-m[pre_sum]);
      }
      return ans;
}

int main() {
      int n;
      cout << "Enter the size of the array: ";
      cin >> n;

      int arr[n];
      cout << "Enter the elements of the array: ";
      for (int i = 0; i < n; i++) {
            cin >> arr[i];
      }

      int result = longSub(arr, n);
      cout << "Length of the longest subarray with equal number of 0s and 1s: " << result << endl;

      return 0;
}