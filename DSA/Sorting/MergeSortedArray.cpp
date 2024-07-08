#include<iostream>
using namespace std;

void mergeArray(int A[], int B[], int m, int n){
     
       int i = 0, j = 0;

       while(i < m && j <n){
          if(A[i] <= B[j]){
            cout << A[i] << " ";
            i++ ;
       }
         else{
            cout << B[j] << " ";
            j++ ;
         }
     }

     if(j==n && i < m){
        for ( int k = i; k < m; k++)
        {
            cout << A[k] << " ";
        }  
     }

     if(i==m && j < n){
        for ( int k = j; k < n; k++)
        {
            cout << B[k] << " ";
        }  
     }
} 

int main() {
    int A[] = {10,20,50};
    int B[] = {5,50,50};
    int m = sizeof(A) / sizeof(A[0]);
    int n = sizeof(B) / sizeof(B[0]);

    mergeArray(A, B, m, n);

    return 0;
}