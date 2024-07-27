#include <iostream>

int max_element(int array[], int n);

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    std::cout << "Maximum element: " << max_element(arr, size) << std::endl;
    return 0;
}
