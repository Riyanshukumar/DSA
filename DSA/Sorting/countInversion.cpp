#include<iostream>
using namespace std;

/*int countInversion(int arr[], int n){

     int count = 0;
     for (int i = 0; i < n-1; i++)
     {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i] > arr[j])
              count++;
        }
        
     }
     return count;
} */

int merge(int arr[], int l, int m, int r){
     int x = m-l+1 ;
     int y = r-m ;
     int left[x], right[y];
     for (int i = 0; i < x; i++)
     {
        left[i] = arr[l+i];
     }
     for (int i = 0; i < y; i++)
     {
        right[i] = arr[m+i+1];
     }
     int i = 0, j = 0;
     int k = l;
     int count = 0;

     while (i<x && j<y)
     {
        if(left[i]<=right[j]){ arr[k] = left[i]; i++; k++;}
        else{ arr[k] = right[j]; j++; k++; count += (x-i);}
     }
     while(i<x){ arr[k] = left[i]; i++; k++;}
     while(j<y){ arr[k] = right[j]; j++; k++;}
     
     return count;
}

int countInversion(int arr[], int l, int r){
       int ans = 0;
       if(l < r){
        int m = (l+r)/2 ;
        ans += countInversion(arr,l,m);
        ans += countInversion(arr,m+1,r);
        ans += merge(arr,l,m,r);
       }
       return ans;
}

int main(){
    int arr[] = {2,4,1,3,5};

    cout << countInversion(arr,0,4);

    return 0;
}