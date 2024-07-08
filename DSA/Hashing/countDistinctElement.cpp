#include<bits/stdc++.h>
using namespace std;

/*void distEle(int arr[], int n, int k){
    for (int i = 0; i <= n-k; i++)
    {
        int count = 0;
        for (int j = 0; j < k; j++)
        {
            bool check = false;
            for (int p = 0; p < j; p++)
            {
                if(arr[i+j] == arr[i+p]){
                    check = true;
                    break;
                }
            }
            if(!check) count++;
        }
        cout << count << " ";
    }
    
}*/

void distEle(int arr[], int n, int k){
     unordered_map<int,int> h;
     
     int count = 0;

     for (int i = 0; i < k; i++)
     {
        if(h[arr[i]] == 0)
           count++;

        h[arr[i]] += 1;   
     }
     cout << count << endl ;

     for (int i = k; i < n; i++)
     {
        if(h[arr[i-k]] == 1)
           count--;
     
        h[arr[i-k]] -= 1;

        if(h[arr[i]] == 0)
          count++;

        h[arr[i]] += 1;

        cout << count << endl;  
     } 
}

int main() {
    int arr[] = {1, 2, 1, 3, 4, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
    
    distEle(arr, n, k);
    
    return 0;
}