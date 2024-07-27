#include <iostream>

double array_mean(int array[], int n);

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    std::cout << "Average: " << array_mean(arr, size) << std::endl;
    return 0;
}
