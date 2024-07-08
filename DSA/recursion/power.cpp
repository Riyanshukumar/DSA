#include<iostream>
using namespace std;

double power(int a, int b){
    if(b == 1){
        return a;
    }
    double temp = power(a, b/2);
    if(b%2 == 0){
        return temp*temp;
    }
    else{
        return a*temp*temp;
    }
}

int main(){
    int num,x;
    cin >> num >> x;

    cout << power(num, x);

    return 0;
}