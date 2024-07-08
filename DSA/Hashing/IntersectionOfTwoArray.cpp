#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*void intersection(int a[], int m, int b[], int n){
    for (int i = 0; i < m; i++)
    {
        bool flag = false;
        for (int j = 0; j < n; j++)
        {
            if(a[i] == b[j])
            {
                flag = true;
                break;
            }
        }
        if(flag)
          cout << a[i] << " ";
    }
    
}*/

void intersection(int a[], int m, int b[], int n){
     unordered_set<int> s(b,b+n);

     for (int i = 0; i < m; i++)
     {
        if(s.find(a[i])!=s.end())
           cout << a[i] << " ";
     }
     
}

int main(){
    int arr[] = {10,30,20,40,50,60,70};
    int brr[] = {20,40,60};

    intersection(arr,7,brr,3);

    return 0;
}