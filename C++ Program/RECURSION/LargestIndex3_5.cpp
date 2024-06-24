#include <iostream>
#include <vector>
#include <climits>

using namespace std;

// Function to find the index of the largest element that is a multiple of both 3 and 5 in the array
int findLargestMultipleOf3And5Index(const vector<int>& arr, int& largestMultipleOf3And5, int index) {
    // Base case: if index is less than 0, return -1 (element not found)
    if (index < 0) {
        return largestMultipleOf3And5;
    }
    // If the current element is a multiple of both 3 and 5 and larger than the previous found one
    if (arr[index] % 3 == 0 && arr[index] % 5 == 0) {
        if (largestMultipleOf3And5 < arr[index]) {
            largestMultipleOf3And5 = arr[index];
        }
    }
    // Recursively call the function with the previous index
    return findLargestMultipleOf3And5Index(arr, largestMultipleOf3And5, index -1 );
}

int main() {
    vector<int> arr = {5, 105, 7, 90, 2, 60, 4};
    int largestMultipleOf3And5 = INT_MIN;
    int largestIndex = findLargestMultipleOf3And5Index(arr, largestMultipleOf3And5, arr.size() - 1);

    if (largestIndex != -1) {
        cout << "The index of the largest multiple of 3 and 5 in the array is: " << largestIndex << endl;
    } else {
        cout << "No multiple of 3 and 5 found in the array." << endl;
    }

    return 0;
}
