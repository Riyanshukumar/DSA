#include<iostream>
using namespace std;

int binSearch(int arr[], int low, int high, int x){

      if(low>high)  return -1;

      int mid = (low+high)/2 ;
      if(arr[mid] == x)  return mid;

      else if(arr[mid] < x)
          binSearch(arr,mid+1,high,x);

       else
          binSearch(arr,low,mid-1,x);   

}

int main(){

    int arr[] = {10,20,30,40,50,60};
    cout << binSearch(arr,0,5,60);

    return 0;
}