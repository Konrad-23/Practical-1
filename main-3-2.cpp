#include <iostream>

int median_array(int array[], int n);

int main() {
    int arr[] = {3, 5, 2, 1, 4};
    std::cout << "Median: " << median_array(arr, 5) << std::endl;
    return 0;
}
