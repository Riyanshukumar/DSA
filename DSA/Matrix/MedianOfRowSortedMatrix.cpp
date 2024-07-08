#include<bits/stdc++.h>
using namespace std;

int matMed(vector<vector<int>> &arr){
    int r = arr.size();
    int c = arr[0].size();
    int minn = arr[0][0], maxx = arr[0][c-1];

    for (int i = 1; i < r; i++)
    {
        if(arr[i][0]<minn) minn = arr[i][0];
        if(arr[i][c-1]>maxx) maxx = arr[i][c-1];
    }
    int medPos = (r*c+1)/2 ;
    while (minn<maxx)
    {
        int mid = (minn+maxx)/2 ;
        int midPos = 0;
        for (int i = 0; i < r; i++)
        {
            midPos += upper_bound(arr[i].begin(), arr[i].end(), mid) - arr[i].begin() ;
        }
        if(midPos < medPos)
           minn = mid+1;

        else 
           maxx = mid;   
    }
     return minn; 
   
}

int main() {
    // Create a sample matrix
    vector<vector<int>> matrix = {
        {1, 3, 2},
        {2, 6, 9},
        {4, 6, 9}
    };

    // Call the matMed function to find the median
    int median = matMed(matrix);

    // Print the median
    cout << "Median of the matrix: " << median << endl;

    return 0;
}