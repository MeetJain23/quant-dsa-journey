#include <iostream>


int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int data[] = {4, 2, 8, 5, 1, 9};
    int n = sizeof(data) / sizeof(data[0]);
    int target = 5;
    
    int result = linearSearch(data, n, target);
    
    if (result != -1) {
        std::cout << "Element found at index: " << result << std::endl;
    } else {
        std::cout << "Element not found in the array." << std::endl;
    }
    return 0;
}
