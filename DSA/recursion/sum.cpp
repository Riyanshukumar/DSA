#include<iostream>
using namespace std;

/*int addition(int n, int sum){
    if(n<=0)
      return sum;

    addition(n-1, sum+n);
}*/

int addition(int n){
    if(n == 0)
       return 0;
       
   return n+addition(n-1);
}

int main(){
    int num;
    cin >> num;

    cout << addition(num);
}