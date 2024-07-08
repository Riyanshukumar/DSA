#include<iostream>
using namespace std;

void PrintNumber(int n){
    if (n == 0)
       return ;
    cout << n << " ";
    PrintNumber(n-1)   ;
}

int main(){
    int num;
    cin >> num;

        PrintNumber(num);
}