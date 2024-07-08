#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;    



int main() {
    /*int arr[] = {5, 2, 3, 1, 4};
    sort(arr, arr + 5);

    for(int x : arr) {
        cout << x << " ";
    }

    //by passing three parameter
    sort(arr, arr + 5, greater<int>());
    cout << endl;
    for(int x : arr) {
        cout << x << " ";
    }*/

   vector<int> v = {5, 7, 20, 10, 9};
    sort(v.begin(), v.end());
    for(int x : v) {
        cout << x << " ";
    }
    cout << endl;
    sort(v.begin(), v.end(), greater<int>());
    for(int x : v) {
        cout << x << " ";
    }
    
    return 0;
}
//containers having random access iterators can be sorted using sort() function
//examples of such containers are arrays and vectors and deque