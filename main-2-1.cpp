#include <iostream>

int min_element(int array[], int n);

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    std::cout << "Minimum element: " << min_element(arr, size) << std::endl;
    return 0;
}
