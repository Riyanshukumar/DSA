#include<iostream>
using namespace std;

/*int remDup(int arr[], int n){
    int temp[n];
    temp[0]=arr[0];

    int ans = 1;
    for (int i = 1; i < n; i++)
    {
        if(temp[ans-1]!=arr[i]){
            temp[ans]=arr[i];
            ans++;
        }
    }
    for (int j = 0; j < ans; j++)
    {
        arr[j]=temp[j];
    }
    return ans;
}*/
int remDup(int arr[], int n){
     
     int ans = 1;
     for (int i = 1; i < n; i++)
     {
        if(arr[i]!=arr[ans-1]){
            arr[ans]=arr[i];
            ans++;
        }
     }
     return ans;
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int newlen = remDup(arr, n);
    cout << newlen << endl;

    for (int i = 0; i < newlen; i++)
    {
        cout << arr[i]<< " ";
    }
    
    return 0;
}