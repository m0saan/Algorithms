

#include <vector>

void merge_results(std::vector<int>& left, std::vector<int>& right, std::vector<int>& out){
  //  if (out.size() == 2 && out[0] <= out[1] && left.size() == right.size()) return;
    auto leftIndex = 0;
    auto rightIndex = 0;
    int i;
    for (i = 0; i < out.size() && leftIndex < left.size() && rightIndex < right.size(); i++) {
        auto min = std::min(left[leftIndex], right[rightIndex]);
        if (min == left[leftIndex]) leftIndex++;
        else rightIndex++;
        out[i] = min;
    }
    while (leftIndex < left.size())
        out[i++] = left[leftIndex++];
    while(rightIndex < right.size())
        out[i++] = right[rightIndex++];
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
