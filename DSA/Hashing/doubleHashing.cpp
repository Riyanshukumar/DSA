#include<iostream>
#include<bits/stdc++.h>
using namespace std;

const int m = 10; // size of the hash table
int table[m]; // hash table

int h1(int key) {
    // hash function 1 implementation
    // modify this function according to your requirements
    return key % m;
}

int h2(int key) {
    // hash function 2 implementation
    // modify this function according to your requirements
    return 1 + (key % (m - 1));
}

bool isFull() {
    for (int i = 0; i < m; i++) {
        if (table[i] == -1) {
            return false;
        }
    }
    return true;
}

void doubleHashingInsert(int key) {
    if (isFull) {
        cout << "Error: Table is full." << endl;
        return;
    }

    int probe = h1(key);
    int offset = h2(key);
    while (table[probe] != -1) {
        probe = (probe + offset) % m;
    }

    table[probe] = key;
}