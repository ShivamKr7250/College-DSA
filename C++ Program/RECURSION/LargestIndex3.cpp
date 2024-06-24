#include <iostream>
#include <vector>
using namespace std;

// Function to find the index of the largest multiple of 3 in the array
int findLargestMultipleOf3Index(const vector<int>& arr, int index, int& largestMultipleOf3) {
    // Base case: if index is less than 0, return -1 (element not found)
    if (index < 0) {
        return -1;
    }

    // Recursively call the function with the previous index
    int previousIndex = findLargestMultipleOf3Index(arr, index - 1, largestMultipleOf3);

    // If the current element is a multiple of 3 and is larger than the current largest multiple of 3
    if (arr[index] % 3 == 0 && arr[index] > largestMultipleOf3) {
        largestMultipleOf3 = arr[index];
        return index;
    }

    // Return the index found in the recursive call
    return previousIndex;
}

int main() {
    vector<int> arr = {5, 3, 30, 3, 18, 3, 21, 3};
    
    int largestMultipleOf3 = INT_MIN;
    int largestMultipleOf3Index = findLargestMultipleOf3Index(arr, arr.size() - 1, largestMultipleOf3);

    if (largestMultipleOf3Index != -1) {
        cout << "The largest multiple of 3 in the array is: " << largestMultipleOf3 << " at index: " << largestMultipleOf3Index << endl;
    } else {
        cout << "No multiple of 3 found in the array." << endl;
    }

    return 0;
}
