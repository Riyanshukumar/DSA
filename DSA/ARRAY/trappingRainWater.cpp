#include <iostream>
using namespace std;

/*int RainWater(int arr[], int n){
    int amount = 0;

    for (int i = 1; i < n-1; i++)
    {
        int lmax = arr[i];
        for (int j = 0; j < i; i++)
        {
            lmax = max(lmax, arr[j]);
        }

        int rmax = arr[i];
        for (int j = i+1; j < n; j++)
        {
            rmax = max(rmax, arr[j]);
        }
        amount = amount+(min(lmax,rmax) - arr[i]);
        
    }
       return amount;
}*/

int RainWater(int arr[], int n){

    int amt = 0;
    int lmax[n], rmax[n];

    lmax[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        lmax[i] = max(arr[i], lmax[i-1]);
    }

    rmax[n-1] = arr[n-1];
    for (int i = n-2; i >= 0; i--)
    {
        rmax[i] = max(arr[i], rmax[i+1]);
    }
    
    for (int i = 1; i < n-1; i++)
    {
        amt = amt + (min(lmax[i], rmax[i]) - arr[i]) ;
    }
    
      return amt;
}

int main(){

    int arr[5] = {5,0,6,2,3};

    cout << RainWater(arr,5);

    return 0;
}