#include<iostream>
using namespace std;

int main(){
   /* int arr[4][3] = {{1,2,3},
                     {4,5,6},
                     {7,8,9},
                     {10,11,12}}; */
  int arr[4][3] = {1,2,3,4,5,6,7,8,9,10,11,12};
//Elements are stored in row major order

   for (int i = 0; i < 4; i++)
   {  for(int j = 0; j < 3; j++){
       cout << arr[i][j] << " ";
   }
    cout << endl;
   }
     return 0;

}