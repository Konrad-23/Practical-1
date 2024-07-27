#include <iostream>

bool is_ascending(int array[], int n);

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    std::cout << "Is ascending: " << (is_ascending(arr, size) ? "true" : "false") << std::endl;
    return 0;
}
