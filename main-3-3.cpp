#include <iostream>

double weighted_average(int array[], int n);

int main() {
    int arr[] = {1, 2, 1, 4, 1, 3};
    std::cout << "Weighted average: " << weighted_average(arr, 6) << std::endl;
    return 0;
}
