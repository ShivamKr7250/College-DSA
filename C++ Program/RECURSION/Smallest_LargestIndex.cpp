#include <iostream>
#include <vector>
using namespace std;

// Function to find the smallest index of target in the array
int findSmallestIndex(const vector<int>& arr, int target, int index = 0) {
    // Base case: if index reaches the length of array, return -1 (element not found)
    if (index == arr.size()) {
        return -1;
    }
    // If the current element matches the target, return the current index
    if (arr[index] == target) {
        return index;
    }
    // Recursively call the function with the next index
    return findSmallestIndex(arr, target, index + 1);
}

// Function to find the largest index of target in the array
int findLargestIndex(const vector<int>& arr, int target, int index = -1) {
    // If index is -1, start from the last index
    if (index == -1) {
        index = arr.size() - 1;
    }
    // Base case: if index is less than 0, return -1 (element not found)
    if (index < 0) {
        return -1;
    }
    // If the current element matches the target, return the current index
    if (arr[index] == target) {
        return index;
    }
    // Recursively call the function with the previous index
    return findLargestIndex(arr, target, index - 1);
}

int main() {
    vector<int> arr = {5, 3, 7, 3, 2, 3, 4};
    int target = 3;

    int smallestIndex = findSmallestIndex(arr, target);
    int largestIndex = findLargestIndex(arr, target);

    cout << "Smallest index of " << target << " in the array is: " << smallestIndex << endl;
    cout << "Largest index of " << target << " in the array is: " << largestIndex << endl;

    return 0;
}
