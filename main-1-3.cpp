#include <iostream>

int num_count(int array[], int n, int number);

int main() {
    int arr[] = {1, 2, 3, 2, 2, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int number = 2;
    std::cout << "Count of " << number << ": " << num_count(arr, size, number) << std::endl;
    return 0;
}
