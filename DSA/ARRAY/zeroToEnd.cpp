#include<iostream>
using namespace std;

/*void ZeroToEnd(int arr[], int n){
       for (int i = 0; i < n; i++)
       {
          if(arr[i]==0){
            for(int j = i+1; j<n; j++){
               if(arr[j]!=0)  {  
                  swap(arr[i],arr[j]);
                  break; 
               }   
          }
       }
    }
       return;
}*/

void ZeroToEnd(int arr[], int n){
          int count = 0;

          for (int i = 0; i < n; i++)
          {
             if(arr[i]!=0){
                swap(arr[i],arr[count]);
                count++ ;
             }
          }
        return ;
}

int main(){
    int arr[6] = {8,5,0,10,0,20};

    ZeroToEnd(arr,6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i]<<" ";

    }
    return 0;
}