#include<iostream>
using namespace std;

/*void leftrotate(int arr[], int n, int d){

    int tempArr[d];

    for (int i = 0; i < d; i++)
    {
        tempArr[i] = arr[i];
    }

    for (int i = d; i < n; i++)
    {
        arr[i-d] = arr[i];
    }
    
    for (int i = 0; i < d; i++)
    {
        arr[n-d+i] = tempArr[i];
    }
    
    
}*/
void reverse(int arr[], int low, int high){

    while(low < high){
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}

void leftrotate(int arr[], int n, int d){
     reverse(arr,0,d-1);
     reverse(arr,d,n-1);
     reverse(arr,0,n-1);
}

int main(){
    int arr[7] = {2,6,4,16,8,9,45};
    leftrotate(arr, 7,5);

    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}