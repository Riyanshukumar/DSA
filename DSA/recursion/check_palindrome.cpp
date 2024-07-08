#include<bits/stdc++.h>
using namespace std;

/*bool checkPalindrome(int i, int arr[], int n){
    if(i>= n/2)
       return true;

    if(arr[i]!=arr[n-i-1])
        return false;

    return checkPalindrome(i+1, arr, n);

            
}*/
bool checkPalindrome(int i, string str){
    if(i>= str.size()/2)
       return true;

    if(str[i]!=str[str.size()-i-1])
        return false;

    return checkPalindrome(i+1, str);

            
}



int main(){
   /* int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }*/
    string str;
    cin >> str;
    cout << checkPalindrome(0, str);
    
}