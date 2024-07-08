#include<iostream>
using namespace std;

int main(){
   int n;
   cin >> n;
   
   int zero = 0;

   for (int i = 5; i <= n ; i = i*5)
   {
      zero += n/i ;
   }
     
     cout << zero << endl;

     return 0;





}