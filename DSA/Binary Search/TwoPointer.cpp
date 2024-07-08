#include<iostream>
using namespace std;

/*bool isPair(int arr[], int n, int k){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]+arr[j] == k)
              return true ;
        }
        
    }
      return false;
}*/

bool isPair(int arr[], int n, int sum){
    int i = 0, j = n-1;

    while(i < j){
        if(arr[i]+arr[j] == sum) return true;

        else if(arr[i]+arr[j] > sum)
            j--;

        else
           i++; 
    }
     return false;
}

int main(){
    int arr[] = {2,4,6,8,10,16};

    cout << isPair(arr,6,12);

    return 0;
}