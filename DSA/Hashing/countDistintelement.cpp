#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*int countDist(int arr[], int n){
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        bool check = false;
        for (int j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
             {  check = true;
                break;
             }
        }
        if(!check) ans++;
    }
    return ans;
}*/

int countDist(int arr[], int n){
   /* unordered_set<int>s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }
    return s.size();*/

    unordered_set<int>s(arr,arr+n);
    return s.size();
}

int main(){
    int arr[] = {10,20,40,60,30,50};
    cout << countDist(arr,6) << endl;
    
    return 0;

}