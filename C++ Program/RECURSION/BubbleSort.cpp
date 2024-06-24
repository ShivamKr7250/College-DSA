#include <bits/stdc++.h>
using namespace std;

void bubbleSortRecursive(int arr[], int n)
{
    if (n == 1)
        return;

    for (int i = 0; i < n - 1; i++)
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);

    bubbleSortRecursive(arr, n - 1);
}

void printArrayRecursive(int arr[], int size, int index = 0)
{
    if (index == size)
    {
        cout << endl;
        return;
    }
    cout << arr[index] << " ";

    printArrayRecursive(arr, size, index + 1);
}

// Driver code
int main()
{
    int arr[] = {5, 1, 4, 2, 8};
    int N = sizeof(arr) / sizeof(arr[0]);
    bubbleSortRecursive(arr, N);
    cout << "Sorted array: \n";
    printArrayRecursive(arr, N);
    return 0;
}
