#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*void frequency(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
            {
                flag = true;
                break;
            }
        }
        if(flag) continue;
       int freq = 1;
        for (int j = i+1; j < n; j++)
        {
            if(arr[i] == arr[j]) freq++;
        }
        
        cout << arr[i] << " "<< freq<< endl ;
    }
    
}*/

void frequency(int arr[], int n){
    unordered_map<int,int>h;

    for (int i = 0; i < n; i++)
    {
        h[arr[i]]++;
    }
    for(auto x : h){
        cout << x.first << " "<< x.second<< endl;
    }

}

int main(){
    int arr[] = {4,2,7,9,2,8,7,4,9,7,8};
    frequency(arr,11);

    return 0;
}