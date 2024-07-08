#include<iostream>
using namespace std;

int josephus(int n, int k){
     
   /*  if(n==1)
       return 0;
     else
       return (josephus(n-1, k)+k)%n;  */

       if(n==1)
        return 1;
       else
         return (josephus(n-1,k) + k-1)%n +1; 
}

int main(){
  int n, k;

  cout << "Enter the number of people: ";
  cin >> n;

  cout << "Enter the counting interval: ";
  cin >> k;

  cout << "The safe position is: " << josephus(n, k);

  return 0;
}