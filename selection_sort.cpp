//
// Created by one for all on 23/09/2020.
//

#include <vector>

void swap(std::vector<int> &vInput, size_t i, int index);

void selectionSort(std::vector<int>& vInput) {
    for (size_t i = 0; i < vInput.size() - 1; ++i) {
        auto min = vInput[i];
        int index = i;
        for (size_t j = i + 1; j < vInput.size(); ++j) {
            if (vInput[j] < min){
                min = vInput[j];
                index = j;
            }
        }
        swap(vInput, i, index);
    }
}

void swap(std::vector<int> &vInput, size_t i, int index) {
    auto tmp = vInput[index];
    vInput[index] = vInput[i];
    vInput[i] = tmp;
}
