#include<iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    int count = 0;

    while(num > 0){
      num = (num & num-1);
      count++;
    }

    cout<< count ;
    return 0;


}
