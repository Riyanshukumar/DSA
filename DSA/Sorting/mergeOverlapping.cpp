#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Interval
{
    int st, end;
};

bool mycomp(Interval a, Interval b){
    return a.st < b.st;
}

void mergeIntrval(Interval arr[], int n){
      sort(arr,arr+n, mycomp);

      int ans = 0;
      for (int i = 1; i < n; i++)
      {
          if(arr[ans].end >= arr[i].st){
            arr[ans].end = max(arr[ans].end, arr[i].end);
            arr[ans].st = min(arr[ans].st, arr[i].st);
      }
        else{
            ans++;
            arr[ans] = arr[i];
        }
      }
        for (int i = 0; i <= ans; i++)
        {
            cout << "[" << arr[i].st << ", " << arr[i].end << "] ";
        }
}

int main(){
    Interval arr[] = {{5,10},{3,15},{18,30},{2,7}};
    int n = sizeof(arr) / sizeof(arr[0]);
    mergeIntrval(arr, n);
    return 0;
}
