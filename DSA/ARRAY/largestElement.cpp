#include<iostream>
using namespace std;

pair<int, int>largestElement(int arr[], int n){
     
    int max_ele = arr[0];
    int idx = 0;

     for (int i = 0; i < n; i++)
     {
        if(arr[i]>max_ele){
            max_ele = arr[i];
            idx = i;
        }
     }

     pair<int,int> ans(idx,max_ele);
     return ans;
}

int main(){
    int arr[6]= {2,4,5,1,10,30};

    pair<int,int>res = largestElement(arr,6);
    cout << res.first <<" "<< res.second;
}