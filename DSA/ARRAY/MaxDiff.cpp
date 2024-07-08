#include<iostream>
using namespace std;

int maxDiff(int arr[], int n){
    int diff = abs(arr[1]-arr[0]);

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            diff = max(diff, abs(arr[j]-arr[i]));
        }
        
    }
    return diff ;
}

/*int maxDiff(int arr[], int n){

}*/

int main(){
    int arr[6] = {50,8,20,19,35,7};
    cout << maxDiff(arr,6);

    return 0;
}