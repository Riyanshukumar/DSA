#include<bits/stdc++.h>
using namespace std;

/*int longseq(int arr[], int n){
    sort(arr,arr+n);

    int ans = 1, curr = 1;
    for (int  i = 1; i < n; i++)
    {
        if(arr[i] == arr[i-1]+1)
           curr++;
        else if(arr[i] != arr[i-1]){
            ans = max(ans,curr);
            curr = 1;
        }   
    }
    return max(ans,curr);
}*/

int longseq(int arr[], int n){
    unordered_set<int>h(arr,arr+n);
    int ans = 1;

    for(auto x : h)
    {
        if(h.find(x-1) == h.end())
        {
            int curr = 1;
            while (h.find(x+curr) != h.end())
            {
                curr++;
            }
            ans = max(ans,curr) ;
        }
    }
    return ans;
}

int main() {
    int arr[] = {1, 9, 3, 10, 4, 20, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = longseq(arr, n);
    cout << "Length of the longest consecutive subsequence is: " << result << endl;
    return 0;
}