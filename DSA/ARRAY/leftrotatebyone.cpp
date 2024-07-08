#include<iostream>
using namespace std;

void leftrot(int arr[], int n){
   /* for (int i = 0; i < n-1; i++)
    {
        swap(arr[i],arr[i+1]);
    }
    return ;*/
    
    int temp = arr[0];
    for (int i = 0; i < n-1; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[n-1]=temp;

}

int main(){
    int arr[6] = {2,5,3,7,8,5};
    leftrot(arr,6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
   return 0;   
}