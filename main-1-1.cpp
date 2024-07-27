#include <iostream>

int array_sum(int array[], int n);

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    std::cout << "Sum: " << array_sum(arr, size) << std::endl;
    return 0;
}
