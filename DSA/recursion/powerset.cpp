#include<iostream>
using namespace std;

void PowerSet(string str, int index = 0, string set =""){
    if(index == str.length()){
         cout << set << endl;
          return ;
    }    

 PowerSet(str, index+1, set);
 PowerSet(str, index+1, set+str[index]); 


}

int main(){
    string str;
    cin >> str;

  PowerSet(str) ;

  return 0;
}