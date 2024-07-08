#include<iostream>
#include<math.h>
using namespace std;

/*void divisors(int n){

    for (int i = 1; i <= sqrt(n); i++)
    {
        if(n%i == 0){
            if(n/i == i){
                cout << i << " ";
            }
            else 
               cout << i << " " << n/i << " ";
        }
    }
    
}*/

//sorted order
void divisors(int n){
    int i;
    for ( i = 1; i*i < n; i++)
    { if (n % i == 0)
        {
            cout << i << " ";
        }   
    }

    for ( ; i >= 1; i--)
    {
        if(n%i == 0)
           cout << n/i << " ";
    }    
    
    
}


int main(){
    int num;
    cin >> num;

    divisors(num);

    return 0;
}