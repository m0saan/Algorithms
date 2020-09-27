
#include <vector>
#include <iostream>

void swap(std::vector<int> &vector, int i, int j) {
    auto tmp = vector[j];
    vector[j] = vector[i];
    vector[i] = tmp;
}

void bubbleSort(std::vector<int>& vector) {
    bool isSorted;
    for (int i = 0; i < vector.size(); ++i) {
        isSorted = true;
        for (int j = i + 1; j < vector.size(); ++j) {
            if (vector[i] > vector[j]) {
                swap(vector, i, j);
                isSorted = false;
            }
            if (isSorted) return;
        }
    }
}
