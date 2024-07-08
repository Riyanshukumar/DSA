#include<bits/stdc++.h>
using namespace std;

/*void givenCount(int arr[], int n, int k){
    sort(arr,arr+n);
    int i=1, count=1;
   
   while(i < n)
   {
    while (i < n && arr[i]==arr[i-1])
    {
       count++;
       i++;
    }
    if(count > n/k)
      cout << arr[i-1] << " ";

    count = 1;
    i++;  
   }

}*/

void givenCount(int arr[], int n, int k){
    unordered_map<int,int>m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }
    for(auto x : m)
    {
        if(x.second > n/k)
          cout << x.first << " ";
    }
    
}

int main() {
    int arr[] = {1, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    givenCount(arr, n, k);

    return 0;
}