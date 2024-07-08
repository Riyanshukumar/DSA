#include<iostream>
using namespace std;

void printname(int i, int n){
    if(i>n)
     return;

    printname(i+1, n); 
    cout << i << " " ;
}

int main(){
    int n;
    cin >> n;
    printname(1,n);

}