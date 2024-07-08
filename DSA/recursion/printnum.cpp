#include<iostream>
using namespace std;

void printnum(int i,int n){
    if(i>n)
       return;
    cout << i << " ";
    printnum(i+1,n);
}
 /* void printnum(int n){
       if(n==0)
          return ;

       printnum(n-1);
       cout << n << " ";   
 }
*/

int main(){
    int x, n;
    cin >> x >> n;

    printnum(x,n);

}