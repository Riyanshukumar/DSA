#include<bits/stdc++.h>
using namespace std;

class TwoStacks {
    int *arr;
    int size;
    int top1, top2;

public:
    TwoStacks(int n) {
        size = n;
        arr = new int[n];
        top1 = -1;
        top2 = size;
    }

    void push1(int x) {
        if (top1 < top2 - 1) {
            top1++;
            arr[top1] = x;
            
        } else {
            cout << "Stack Overflow" << endl;
            exit(1);
        }
    }

    void push2(int x) {
        if (top1 < top2 - 1) {
            top2--;
            arr[top2] = x;
        } else {
            cout << "Stack Overflow" << endl;
            exit(1);
        }
    }

    int pop1() {
        if (top1 >= 0) {
            int x = arr[top1];
            top1--;
            return x;
        } else {
            cout << "Stack Underflow" << endl;
            exit(1);
        }
    }

    int pop2() {
        if (top2 < size) {
            int x = arr[top2];
            top2++;
            return x;
        } else {
            cout << "Stack Underflow" << endl;
            exit(1);
        }
    }

    void printStack1() {
        for (int i = 0; i <= top1; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void printStack2() {
        for (int i = size - 1; i >= top2; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void printArray() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    int size1() {
        return top1 + 1;
    }

    int size2() {
        return size - top2;
    }
};

int main() {
    TwoStacks ts(5);
    ts.push1(5);
    ts.push2(10);
    ts.push2(15);
    ts.push1(11);
    ts.push2(7);

    cout << "Stack 1: ";
    ts.printStack1();

    cout << "Stack 2: ";
    ts.printStack2();

    cout << "Array: ";
    ts.printArray();

    cout << "Popped element from stack 1 is " << ts.pop1() << endl;

    cout << "Stack 1: ";
    ts.printStack1();

    cout << "Popped element from stack 2 is " << ts.pop2() << endl;

    cout << "Stack 2: ";
    ts.printStack2();

    return 0;
}