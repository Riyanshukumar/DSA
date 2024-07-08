#include<iostream>
using namespace std;

int lcm(int a, int b){
    int ans = max(a,b);

 while (ans > 0)
 {
    if (ans % a == 0 && ans % b == 0)
    {
        break;
    }
    
    ans++;
 }
    
  return ans;

}


int main(){

  int a, b;
  cin >> a>>b;

  cout << lcm(a,b) << endl ;

  return 0;

}