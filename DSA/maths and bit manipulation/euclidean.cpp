#include <iostream>
using namespace std;

int hcf(int a, int b){

    while(a != b){
        if (a>b)
        {
            a = a-b ;
        }
        else{
            b = b-a;
        }
        
    }
       return a;

}

int main(){

int a,b;
cin >> a>>b;
cout << hcf(a,b);

return 0;

}