#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int num, k;
    cin >> num >> k;
    
  /*  int x =1;
   for (int i = 1; i < k; i++)
    {
       x*= 2;
    }

    if((num & x)!= 0)
      cout << "yes"<< endl;
    else 
       cout << "NO" << endl; */

   /* for (int i = 1; i < k; i++)
    {
       num = num/2 ;
    }

    if((num & 1)!= 0)
      cout << "yes"<< endl;
    else 
       cout << "NO" << endl; */

    //left shift operator
   
  /* int x = (1 << (k-1));
     if((num & x)!= 0)
      cout << "YES"<< endl;
    else 
       cout << "NO" << endl; */

   //Right shift
  int x = (num >> (k-1));
   if((num & 1)!= 0)
      cout << "YES"<< endl;
    else 
       cout << "NO" << endl;

    return 0;     
    
   


    

}