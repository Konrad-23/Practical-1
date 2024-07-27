#include <iostream>

bool is_descending(int array[], int n);

int main() {
    int arr[] = {5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    std::cout << "Is descending: " << (is_descending(arr, size) ? "true" : "false") << std::endl;
    return 0;
}
