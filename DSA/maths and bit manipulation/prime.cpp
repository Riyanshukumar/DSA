#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int check = 2 ;
if (n > 1){
    for ( int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
          cout << " NOT a prime number";
          break;
        }
        check++ ;
    }
    
     if (check > sqrt(n))
     {
        cout << "Prime Number";
     }
} 
     else {
        cout << " PLEASE enter a number greater than 1"; 
     }
}