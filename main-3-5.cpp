#include <iostream>

double sum_even(double array[], int n);

int main() {
    double arr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int size = sizeof(arr) / sizeof(arr[0]);
    std::cout << "Sum of elements at even positions: " << sum_even(arr, size) << std::endl;
    return 0;
}
