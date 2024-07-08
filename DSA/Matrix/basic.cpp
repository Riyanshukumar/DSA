#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m, n;
    cin >> m>> n;
    //int arr[m][n]; //contiguous array
 // int **arr;  //two pointer array
 // arr = new int*[m];

 /*  int *arr[m];

  for(int i=0; i<m; i++){
    arr[i] = new int[n];
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = i+j;
        }
        
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        
    }  */

/*   vector<int> arr[m];  //not cache friendly
   for(int i=0; i<m; i++)
   {  
     for (int j = 0; j < n; j++)
     {
        arr[i].push_back(i+j);
     } 
   }
   for (int i = 0; i < m; i++)
   {
    for (int j = 0; j < n; j++)     
    {
        cout << arr[i][j] << " ";   
        }
        cout << endl;
        }
*/
   vector<vector<int>> arr;
   for (int i = 0; i < m; i++)
   {   
     vector<int> v;
     for (int j = 0; j < n; j++)
     {
        v.push_back(i+j);
     }
      arr.push_back(v);
   }
   
   for (int i = 0; i < m; i++)
   {
    for (int j = 0; j < n; j++)
    {
        cout << arr[i][j] << " ";
        }
        cout << endl;
        }
        
    return 0;
    
}