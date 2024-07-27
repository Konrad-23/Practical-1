#include <iostream>

void two_five_nine(int array[], int n);

int main() {
    int arr[] = {2, 5, 9, 2, 5, 9, 9, 9, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    two_five_nine(arr, size);
    return 0;
}
