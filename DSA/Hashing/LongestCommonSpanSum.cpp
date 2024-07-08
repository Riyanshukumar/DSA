#include<bits/stdc++.h>
using namespace std;

int commonLen(int a[], int b[], int n){
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int sum1 = 0, sum2 = 0;
        for (int j = i; j < n; j++)
        {
            sum1 += a[j];
            sum2 += b[j];
            if(sum1 == sum2)
              ans = max(ans,j-i+1);
        }
        
    }
     return ans;
}
//0ly for binary array

int main() {
    int n;
    cout << "Enter the size of the arrays: ";
    cin >> n;

    int a[n], b[n];
    cout << "Enter the elements of array a: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter the elements of array b: ";
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int result = commonLen(a, b, n);
    cout << "The length of the longest common span with equal sum is: " << result << endl;

    return 0;
}