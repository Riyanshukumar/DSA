#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int RopeCutting(int n, int a, int b, int c){
     if(n<0)
        return -1;
    if(n==0)
       return 0;    
int piece = max(max(RopeCutting(n-a,a,b,c),RopeCutting(n-b,a,b,c)),RopeCutting(n-c,a,b,c));

if(piece == -1)
   return -1;

return piece+1;

}


int main(){
    int n,a,b,c ;
    cin >> n >> a >> b >> c;

    cout << RopeCutting(n,a,b,c);

    return 0;
}