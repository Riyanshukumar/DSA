#include<iostream>
using namespace std;

void TwoOdd(int arr[],int n){
    int x = arr[0];
    for (int i = 1; i < n; i++)
    {
        x = x^arr[i];
    }

    int k = (x&(~(x-1))); //it gives the rightmost set bit 

    int odd1 = 0;
    int odd2 = 0;

    for (int i = 0; i < n; i++)
    {
        if((arr[i]&k)!= 0)
             odd1 = odd1^arr[i];
        else 
            odd2 = odd2^arr[i];     
    }

    cout << odd1 << " "<< odd2;
    
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    TwoOdd(arr,n);

    return 0;
    
}