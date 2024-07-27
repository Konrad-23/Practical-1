#include <iostream>

int sum_two_arrays(int array[], int secondarray[], int n);

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    std::cout << "Sum of two arrays: " << sum_two_arrays(arr1, arr2, size) << std::endl;
    return 0;
}
