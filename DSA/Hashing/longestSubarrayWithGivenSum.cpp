#include<bits/stdc++.h>
using namespace std;

/*int maxlen(int arr[], int n, int sum){
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int curr_sum = 0;
        for (int j = i; j < n; j++)
        {
            curr_sum += arr[j];

            if(curr_sum == sum)
              ans = max(ans, j-i+1);
        }
        
    }
    return ans;
}*/

int maxlen(int arr[], int n, int sum){
    unordered_map<int,int> m;
    int pre_sum = 0, ans = 0;

    for (int i = 0; i < n; i++)
    {
        pre_sum += arr[i];
        if(pre_sum == sum) 
          ans = i+1;

        if(m.find(pre_sum) == m.end())
          m.insert({pre_sum,i});

        if(m.find(pre_sum - sum) != m.end())
            ans = max(ans, i-m[pre_sum-sum]);     
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

    int sum;
    cout << "Enter the target sum: ";
    cin >> sum;

    int result = maxlen(arr, n, sum);
    cout << "The length of the longest subarray with sum " << sum << " is: " << result << endl;

    return 0;
}
