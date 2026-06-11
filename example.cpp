#include <iostream>
using namespace std;

int findLargest(int arr[], int n) {
    int largest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    return largest;
}

int main() {
    int arr[] = {5, 2, 9, 1, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Largest element: " << findLargest(arr, n);

    return 0;
}