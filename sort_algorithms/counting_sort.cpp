
#include <vector>
#include <algorithm>

void countingSort(std::vector<int>& vector){
    if (vector.size() == 1 || !vector.size()) return;
    std::vector<int> counter ( *std::max_element(vector.begin(), vector.end()) + 1, 0);
    for (auto& item : vector)
        counter[item] += 1;
    size_t iCounter = 0;
    for (int iVector = 0; iVector < vector.size();) {
        auto nOfItems = counter[iCounter];
        while (nOfItems--) vector[iVector++] = iCounter;
        iCounter++;
    }
}
