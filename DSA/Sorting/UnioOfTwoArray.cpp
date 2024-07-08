#include<iostream>
#include<algorithm>
using namespace std;

/*void Union(int a[], int b[], int m, int n){
     int i = 0, j = 0;

     while (i < m && j < n)
     {
        if(i > 0 && a[i] == a[i-1]){
           i++;
           continue;
        }

        if(a[i] > b[j]){
            if(b[j]!=b[j-1] || j == 0){
                cout << b[j] << " ";
                 j++;
            }
            else 
               j++;    
        }   
        else if(a[i] <  b[j]){
            cout << a[i] << " ";
            i++;
        }
        else{
            cout << a[i] << " ";
            i++; j++;
        }
        
     }
     while (i<m)
     {
        if(a[i] != a[i-1]){
            cout << a[i]<< " ";
            i++;
        }
        else 
           i++;
     }
     while (j<n)
     {
        if(b[j] != b[j-1]){
            cout << b[j]<< " ";
            j++;
        }
        else 
           j++;
     } 
      
} */

void Union(int a[],int b[],int m, int n){
    int c[m+n];
    for (int i = 0; i < m; i++)
    {
      c[i] = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        c[m+i] = b[i];
    }
    
    sort(c,c+m+n);
    for (int i = 0; i < m+n; i++)
    {
        if(i == 0||c[i]!=c[i-1])
            cout << c[i] << " ";
    }
    
}

int main() {
    int m, n;
    cout << "Enter the size of array A: ";
    cin >> m;
    int a[m];
    cout << "Enter the elements of array A: ";
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }

    cout << "Enter the size of array B: ";
    cin >> n;
    int b[n];
    cout << "Enter the elements of array B: ";
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    cout << "Union of arrays A and B: ";
    Union(a, b, m, n);

    return 0;
}