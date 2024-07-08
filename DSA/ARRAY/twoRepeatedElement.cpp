#include <iostream>
#include <vector>
#include <unordered_set>

std::vector<int> findTwoRepeatedElements(int arr[], int n) {
    std::unordered_set<int> seen;
    std::vector<int> result;

    for (int i = 0; i < n + 2; i++) {
        if (seen.find(arr[i]) != seen.end()) {
            result.push_back(arr[i]);
        } else {
            seen.insert(arr[i]);
        }
    }

    return result;
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    int arr[n + 2];
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n + 2; i++) {
        std::cin >> arr[i];
    }

    std::vector<int> repeatedElements = findTwoRepeatedElements(arr, n);
    std::cout << "The two repeating elements are: ";
    for (int element : repeatedElements) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}