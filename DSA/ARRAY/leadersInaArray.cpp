#include<iostream>
using namespace std;

/*void leader(int arr[], int n){
    for (int i = 0; i < n; i++)
    {    
        int j;
        for (j = i+1; j < n; j++)
        {
            if(arr[i] <= arr[j])
              break;
        }
        if(j == n)
          cout << arr[i] << " ";
    }
    
}*/

void leader(int arr[], int n){

    int curr_leader = arr[n-1];
    cout << curr_leader <<" ";

    for (int i = n-2; i >= 0; i--)
    {
        if(arr[i] > curr_leader){
            cout << arr[i]<< " ";
            curr_leader = arr[i];
        }

    }
    
}

int main(){
    int arr[7] = { 19, 35, 28, 35, 33, 30, 29};
    leader(arr, 7);
}