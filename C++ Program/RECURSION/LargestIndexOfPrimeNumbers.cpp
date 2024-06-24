#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

// Function to find the index of the largest prime number in the array
int findLargestPrimeIndex(const vector<int>& arr, int& largestPrime, int index) {
    // Base case: if index is less than 0, return -1 (element not found)
    if (index < 0) {
        return largestPrime;
    }
    // If the current element is prime and larger than the largest found so far
    if (isPrime(arr[index]) && arr[index] > largestPrime) {
        largestPrime = arr[index];
       // return index;
    }
    // Recursively call the function with the previous index
    return findLargestPrimeIndex(arr, largestPrime, index - 1);
}

int main() {
    vector<int> arr = {5, 18, 7, 21, 2, 9, 23, 17};
    
    int largestPrime = INT_MIN;
    int largestPrimeIndex = findLargestPrimeIndex(arr, largestPrime, arr.size()-1);

    if (largestPrimeIndex != -1) {
        cout << "The index of the largest prime number in the array is: " << largestPrimeIndex << endl;
    } else {
        cout << "No prime number found in the array." << endl;
    }

    return 0;
}
