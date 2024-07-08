#include<iostream>
#include<math.h>
using namespace std;
  
  void divisors(int n) {
    for (int i = 1; i <= n; i++) {
      if (n % i == 0) {
        cout << i << " ";
      }
    }
  }

  int main(){
    int num;
    cin >> num;

    divisors(num);

    return 0;
  }