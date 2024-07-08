#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*vector<int> isTriplet(int arr[], int n, int sum){

    vector<int>ans;
    for (int i = 0; i < n-2; i++)
    {
        for (int j = i+1; j < n-1; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                if(arr[i]+arr[j]+arr[k] == sum)
                   ans.push_back(i);
                   ans.push_back(j);
                   ans.push_back(k);
                  
                  return ans;
            }
            
        }
        
    }
      return ans;
}*/
bool isPair(int arr[], int st, int end, int sum){
      
      while(st < end){
        if(arr[st]+arr[end] == sum)
           return true;

        else if(arr[st] + arr[end] > sum)
              end--;

        else 
             st++;        
      }
      return false;
}

bool triplet(int arr[], int n, int sum){
    for (int i = 0; i < n-2; i++)
    {
        if(isPair(arr, i+1, n-1, sum-arr[i]))
           return true;
    }
     return false;
}

int main(){

    int arr[] = {2,4,6,9,10,13,16,18,23,45,49,51};

    //vector<int> res = isTriplet(arr,12,70);

    /*for(int i = 0; i < res.size(); i++){
         cout << res[i] << " ";
    }*/
  cout << triplet(arr,12,111);

  return 0;
    
}