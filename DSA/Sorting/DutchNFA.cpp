#include<iostream>
using namespace std;

void dnfa(int arr[], int n){
     int low = 0, high = n-1, mid = 0;
     while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
     else if(arr[mid] == 1)
           mid++;
      else{
        swap(arr[mid], arr[high]);
        high--;
      }     
     
     }       
}
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        }
        cout << "Original array: ";
        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
         }
            cout << endl;
            dnfa(arr, n);
            cout << "Array after Dutch National Flag Algorithm: ";
            for(int i = 0; i < n; i++){
                cout << arr[i] << " ";
             }
                return 0;
}