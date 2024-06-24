#include <iostream>
#include <vector>

// Function to find the index of the largest element that is a multiple of 3 and not a multiple of 5 in the array
int findLargestMultipleOf3Not5Index(const std::vector<int>& arr, int index = -1) {
    // If index is -1, start from the last index
    if (index == -1) {
        index = arr.size() - 1;
    }
    // Base case: if index is less than 0, return -1 (element not found)
    if (index < 0) {
        return -1;
    }
    // If the current element is a multiple of 3 and not a multiple of 5, return the current index
    if (arr[index] % 3 == 0 && arr[index] % 5 != 0) {
        return index;
    }
    // Recursively call the function with the previous index
    return findLargestMultipleOf3Not5Index(arr, index - 1);
}

int main() {
    std::vector<int> arr = {5, 18, 7, 21, 2, 9, 4};
    
    int largestIndex = findLargestMultipleOf3Not5Index(arr);

    if (largestIndex != -1) {
        std::cout << "The index of the largest multiple of 3 and not 5 in the array is: " << largestIndex << std::endl;
    } else {
        std::cout << "No multiple of 3 and not 5 found in the array." << std::endl;
    }

    return 0;
}
