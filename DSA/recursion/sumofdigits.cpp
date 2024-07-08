#include<iostream>
using namespace std;

int SumofDigits(int n, int sum){
     if(n==0)
       return sum;

   return SumofDigits((n/10),sum+n%10);   

}

int main(){

    int num;
    cin >> num ;

    cout << SumofDigits(num, 0) ;

    return 0;
}