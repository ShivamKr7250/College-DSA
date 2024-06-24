#include <iostream>
using namespace std;

void merge(int nums1[], int m, int nums2[], int n) {
    // Start from the end of nums1 and nums2
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    // Merge nums2 into nums1 starting from the end
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--];
        } else {
            nums1[k--] = nums2[j--];
        }
    }

    // Copy any remaining elements from nums2 (if any)
    while (j >= 0) {
        nums1[k--] = nums2[j--];
    }
}

int main() {
    // Example arrays
    int nums1[9] = {1, 3, 5, 7, 9, 0, 0, 0, 0}; // nums1 has enough space to hold elements of nums2
    int nums2[] = {2, 4, 6, 8};
    int m = 5; // Number of valid elements in nums1
    int n = 4; // Number of elements in nums2

    merge(nums1, m, nums2, n);

    // Print the merged array
    for (int i = 0; i < m + n; i++) {
        cout << nums1[i] << " ";
    }
    cout << endl;

    return 0;
}
