#include<iostream>
using namespace std;

/*int countOne(int arr[], int n){
    int start = 0;

    for (int i = 0; i < n; i++)
    {
        if(arr[i] == 1){
            start = i;
            break;
        }
    }
    if(start == 0 && arr[0] == 0)
       return 0;

    else 
       return (n-start) ;
} */

int countOne(int arr[], int n){
    int low = 0, high = n-1;

    while(low <= high){
        int mid = (high+low)/2 ;

        if(arr[mid] == 0)
          low = mid+1;

        else{
            if(mid == 0 || arr[mid-1] != 1)
                return (n-mid);

            else 
              high = mid-1;    
        }
             
    }
      return 0;
}

int main(){
    int arr[] = {0,1,1,1};
    cout << countOne(arr,4) ;

    return 0;
}