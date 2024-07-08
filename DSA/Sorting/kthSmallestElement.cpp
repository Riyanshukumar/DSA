#include<iostream>
using namespace std;

int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low - 1;
    for(int j = low; j < high; j++){
        if(arr[j] < pivot){ 
            i++;
            swap(arr[i], arr[j]);
            }
            }
            swap(arr[i+1], arr[high]);
            return i+1;
}

int kthSmallest(int arr[], int n, int k){
    int l = 0, h = n-1;
    while(l <= h){
       int p = partition(arr,l,h);

       if(p == k-1) return arr[p];

       else if(p > k-1){
        h = p-1;
       }
       else{
        l = p + 1;
      }
    }
    return -1;
}

int main(){
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) cin >> arr[i];
    cout << "Enter the value of k: ";
    cin >> k;
    cout << "Kth smallest element is: " << kthSmallest(arr, n,
    k) << endl;
    return 0;
    
}