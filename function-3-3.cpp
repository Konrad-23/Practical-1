#include <unordered_map>

double weighted_average(int array[], int n) {
    if (n < 1) return 0.0;
    std::unordered_map<int, int> frequency;
    for (int i = 0; i < n; ++i) {
        frequency[array[i]]++;
    }
    double sum = 0.0;
    for (const auto& kv : frequency) {
        sum += kv.first * static_cast<double>(kv.second) / n;
    }
    return sum;
}
