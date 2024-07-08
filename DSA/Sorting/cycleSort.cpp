#include<iostream>
using namespace std;

void cycleSort(int arr[], int n){
    for (int cs = 0; cs < n-1; cs++)
    {
        int item = arr[cs];
        int pos = cs;

        for (int i = cs+1; i < n; i++)
        {
            if(arr[i] < item)
                pos++;
        }

        swap(item, arr[pos]);

        while(pos != cs){
            pos = cs;
            for (int i = cs+1; i < n; i++)
            {
                if(arr[i] < item)
                    pos++;
            }
            swap(item, arr[pos]);
        }
    }
}

int main(){
    int arr[] = {20, 40, 50, 10, 30};
    int n = sizeof(arr) / sizeof(arr[0]);

    cycleSort(arr, n);

    cout << "Array after sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}