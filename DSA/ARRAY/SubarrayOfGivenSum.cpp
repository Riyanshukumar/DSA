#include<iostream>
using namespace std;

  bool isSubSum(int arr[], int n, int sum){
      
        int curr= 0;
        int st = 0;
        for (int en = 0; en < n; en++)
        {
            curr += arr[en];

            while(sum < curr){
                curr -= arr[st];
                st++ ;
            }

            if(curr == sum)
              return true;
        }
           return false;
  }

int main(){

    int arr[]= {1,4,20,3,10,5};

    cout << isSubSum(arr,6,33);

}


/*bool isSubSum(int arr[], int n, int sum){

    for (int i = 0; i < n; i++)
    {
        int curr = 0 ;
        for (int j = i; j < n; j++)
        {
            curr += arr[j];

            if(curr == sum)
              return true;
        }
        
    }
       return false;
}*/