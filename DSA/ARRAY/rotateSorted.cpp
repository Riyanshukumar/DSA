#include<iostream>
using namespace std;

void rotate(int arr[], int n){
        int temp = arr[0];
        for(int i = 1; i < n; i++) {
            arr[i-1] = arr[i];
        }
        arr[n-1] = temp;
    }
    
    bool sortInc(int arr[], int n){
        
        for(int i = 1; i < n; i++){
            if(arr[i-1]>arr[i])
              return false;
        }
        return true;
    }
    
    bool sortDec(int arr[], int n){
        
        for(int i = 1; i < n; i++){
            if(arr[i-1] < arr[i])
              return false;
        }
        return true;
    }
    
    bool checkRotatedAndSorted(int arr[], int num){
        
        for(int i = 0; i< num-1; i++){
            rotate(arr,num);
            
            if(sortInc(arr,num)||sortDec(arr,num))
               return true;
            
        }
        return false;
    }

    int main(){

        int arr[5] = {8,7,6,10,9};
        cout <<  checkRotatedAndSorted(arr,5);

        return 0;
    }