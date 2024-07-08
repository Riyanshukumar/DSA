#include<iostream>
using namespace std;

int OneOdd(int arr[], int n){
   /* for (int i = 0; i < n; i++)
    {    
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if(arr[i]==arr[j])
                count++;
        }
            if(count%2 != 0)
                 return arr[i];     
    }*/
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = (arr[i] ^ ans);
    }
    return ans;
    
}

int main(){
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << OneOdd(arr, n);
    
}