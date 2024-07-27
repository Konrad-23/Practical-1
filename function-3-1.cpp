#include <iostream>

bool is_fanarray(int array[], int n) {
    if (n < 1) return false;
    int mid = n / 2;
    for (int i = 0; i < mid; ++i) {
        if (array[i] != array[n - 1 - i] || (i > 0 && array[i] < array[i - 1])) {
            return false;
        }
    }
    return true;
}
