#include<iostream>
using namespace std;

/* int maxAppear(int left[], int right[], int n){
   
   int freq[100] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = left[i]; j <= right[i]; j++)
        {
           freq[j] += 1; 
        }
        
    }
    int res = 0;
    for (int i = 1; i < 100; i++)
    {
        if(freq[i] > freq[res])
           res = i;
    }
    
    return res;
} */

int maxAppear(int left[], int right[], int n){
     int freq[101] = {0};

     for (int i = 0; i < n; i++)
     {
        freq[left[i]]++;
        freq[right[i]+1]--;
     }

     int res = 0;
     for (int i = 1; i < 101; i++)
     {
        freq[i] = freq[i-1]+freq[i];
        if(freq[i] > freq[res])
           res = i;
     }
     return res;   
}

int main(){
    int l[] = {1,2,4};
    int r[] = {4,5,7};

    cout << maxAppear(l,r,3);

    return 0;
}