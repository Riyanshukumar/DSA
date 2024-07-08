#include<bits/stdc++.h>
using namespace std;

/*void TOH(int N, char from_rod, char aux_rod, char to_rod) {  //A -- from; B -- aux ; C -- to
    if(N==0)
       return;

    TOH(N-1,from_rod,to_rod,aux_rod);
    cout << "Move disk "<< N << " From rod " << from_rod << " to rod "<< to_rod << endl; ;
    TOH(N-1,aux_rod,from_rod,to_rod);

}*/

void TOH(int n, char A, char B, char C){
    if(n==1) {
      cout << "Move disk 1 from rod "<< A << " to rod "<< C <<endl;
      return ;
    }

    TOH(n-1,A,C,B);  
    cout << "Move disk " << n << " from rod "<< A << " to rod "<< C << endl;
    TOH(n-1,B,A,C);
}

int main(){
    int n;
    cin >> n;
    char A,B,C;

    TOH(n,'A','B','C');

    return 0;
}