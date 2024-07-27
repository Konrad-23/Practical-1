#include <iostream>

bool is_fanarray(int array[], int n);

int main() {
    int arr1[] = {1, 2, 3, 2, 1};
    int arr2[] = {1, 2, 1, 2, 1};
    int arr3[] = {2, 4, 4, 2};
    std::cout << "Array 1 is fan array: " << (is_fanarray(arr1, 5) ? "true" : "false") << std::endl;
    std::cout << "Array 2 is fan array: " << (is_fanarray(arr2, 5) ? "true" : "false") << std::endl;
    std::cout << "Array 3 is fan array: " << (is_fanarray(arr3, 4) ? "true" : "false") << std::endl;
    return 0;
}
