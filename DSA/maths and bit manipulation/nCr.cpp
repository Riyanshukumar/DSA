#include<iostream>
using namespace std;

int nCr(int n, int r){
    int ans = 1;
     for (int i = 0; i < r; i++)
     {
        ans *= n-i;
        ans /= (i+1);
     }
      return ans;
}

int main() {
    int n, r;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of r: ";
    cin >> r;
    
    int result = nCr(n, r);
    cout << "nCr = " << result << endl;
    
    return 0;
}