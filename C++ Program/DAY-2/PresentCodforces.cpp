#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> p(n);
    vector<int> result(n);

    // Reading the input array p
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }

    // Reversing the mapping
    for (int i = 0; i < n; ++i) {
        result[p[i] - 1] = i + 1;
    }

    // Printing the result
    for (int i = 0; i < n; ++i) {
        cout << result[i] << " ";
    }

    return 0;
}
