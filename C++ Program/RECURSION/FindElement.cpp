#include <iostream>
using namespace std;

void findIndex(int arr[], int size, int ElementToFind, int count = 0){
    if (count == size) {
        cout << "Element not found";
        return;
    }
    if (arr[count] == ElementToFind) {
        cout << count;
        return;
    }
    findIndex(arr, size, ElementToFind, count + 1);
}

int main() {
    int arr[] = {-9, 19, 8, 7, -2, 5, 6, 3, 9};
    int size = sizeof(arr) / sizeof(int);
    int ElementToFind = 9;

    findIndex(arr, size, ElementToFind);
    return 0;
}
