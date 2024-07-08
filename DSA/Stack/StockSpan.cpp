#include<bits/stdc++.h>
using namespace std;

/*void printspan(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        int span = 1;
        for(int j=i-1; j>=0&&arr[j]<=arr[i]; j--){
            span++;
        }
        cout << span << " ";
    }
    
}*/
struct Stack
{
    int top;
    unsigned capacity;
    int* array;

    Stack(unsigned capacity){
        this->capacity = capacity;
        top = -1;
        array = new int[capacity];
    }

    void push(int x){
        array[++top] = x;
    }

};


void printspan(int arr[], int n){
    Stack s(n);
    s.push(0);
    cout << "1 ";
    for (int i = 1; i < n; i++)
    {
        while(s.top!=-1 && arr[s.array[s.top]]<=arr[i]){
            s.top--;
        }
        int span = (s.top==-1)?(i+1):(i-s.array[s.top]);
        cout << span << " ";
        s.push(i);
    }

}

int main() {
    int arr[] = {100, 80, 60, 70, 60, 75, 85};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printspan(arr, n);
    
    return 0;
}