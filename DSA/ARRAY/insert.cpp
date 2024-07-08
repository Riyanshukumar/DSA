#include<iostream>
using namespace std;

int* insert(int arr[], int n, int x, int cap, int pos){
    if(n==cap)
      return arr;

    int idx = pos-1;
    for (int i = n-1; i >= idx; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[idx]=x;
    n++;

     return arr; 
}

int main(){
    int arr[6] = {2,5,7,9};
    int*ans = insert(arr,4,15,6,4);

    for (int i = 0; i < 6; i++)
    {
        cout << ans[i]<< " ";
    }
    

}