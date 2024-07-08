#include<iostream>
using namespace std;

/*bool ispower(int num){
     while(num > 1){
        if(num%2 != 0)
           return false;
        num = num/2;   
    }
    return true;   
}*/

//using brian kernighan algorithm
bool ispower(int n){

  /*  int count = 0;
    while(n>0){
        n = n&(n-1);
          count++;
    } 
   if(count == 1)
      return true;
  else 
      return false; */

      if(n ==0)
         return false;
         
      return ((n&(n-1))==0)   ;
}

int main(){
    int num;
    cin >> num;
    
 cout << ispower(num);

return 0;

}