

#include <vector>

void merge_results(std::vector<int>& left, std::vector<int>& right, std::vector<int>& out){
    auto leftIndex = 0;
    auto rightIndex = 0;
    for (int & i : out) {
        if (left[leftIndex] > right[rightIndex] && rightIndex < right.size())
            i = right[rightIndex++];
        else
            i = left[leftIndex++];
    }
}

void sort(std::vector<int>& inputArray){
    auto middle = static_cast<int>(inputArray.size() / 2);

    if (!(middle)) return;
    std::vector<int> vLeft(inputArray.begin(), inputArray.begin() + middle);
    std::vector<int> vRight(inputArray.begin() + middle, inputArray.end());

    sort(vLeft);
    sort(vRight);

    merge_results(vLeft, vRight, inputArray);
}

void mergeSort(std::vector<int>& inputArray){
    sort(inputArray);
}
