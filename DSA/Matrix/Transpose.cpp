#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*void transpose(vector<int>arr[], int m){
    int temp[m][m];
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            temp[i][j] = arr[j][i];
            }
            }
            for(int i=0; i<m; i++){
                for(int j=0; j<m; j++){
                    arr[i][j] = temp[i][j] ;
                    }
                    }
}*/
void transpose(vector<int>arr[], int m){
    for(int i=0; i<m; i++){
        for(int j=i+1; j<m; j++){
            swap(arr[i][j], arr[j][i]);
            }
            }

}

int main(){
    int m;
    cout << "Enter the size of the matrix: ";
    cin >> m;
    int num;
    
    vector<int>arr[m];
    cout << "Enter the elements of the matrix: ";
    for(int i=0; i<m; i++){ 
        for(int j=0; j<m; j++){
            cin >> num;
            arr[i].push_back(num);
            }
            }
            cout << "Original Matrix: " << endl;
            for(int i=0; i<m; i++){
                for(int j=0; j<m; j++){
                    cout << arr[i][j] << " ";
                    }
                    cout << endl;
                    }
                    transpose(arr, m);
                    cout << "Transposed Matrix: " << endl;
                    for(int i=0; i<m; i++){
                        for(int j=0; j<m; j++){
                            cout << arr[i][j] << " ";
                            }
                            cout << endl;
                            }
                            return 0;
                            
}