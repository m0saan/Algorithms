#include <vector>

void merge_results(const std::vector<int>& left, const std::vector<int>& right, std::vector<int>& inputVec){
    size_t iLeft = 0;
    size_t iRight = 0;
    size_t  i;
    for (i = 0; i < inputVec.size() && iLeft < left.size() && iRight < right.size(); ++i) {
        auto min = std::min(left[iLeft], right[iRight]);
        min == left[iLeft] ? iLeft++ : iRight++;
        inputVec[i] = min;
    }
    while (iLeft < left.size()) inputVec[i++] = left[iLeft++];
    while (iRight < right.size()) inputVec[i++] = right[iRight++];
}

void mergeSort(std::vector<int>& vector){
    auto middle = static_cast<int>(vector.size() / 2);

    if (!(middle)) return;

    // divide
    std::vector<int> left { vector.begin(), vector.begin() + middle};
    std::vector<int> right { vector.begin() + middle, vector.end() };

    mergeSort(left);
    mergeSort(right);

    merge_results(left, right, vector);
}