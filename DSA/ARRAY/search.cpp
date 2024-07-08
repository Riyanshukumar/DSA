#include<iostream>
using namespace std;

int search(int arr[], int n, int x){
    for(int i =0; i<n; i++){
        if(arr[i]==x)
          return i;
    }
    return -1;
}

int main(){
    int arr[5] = {2,5,38,9,10};
    cout << search(arr,5,9);
}