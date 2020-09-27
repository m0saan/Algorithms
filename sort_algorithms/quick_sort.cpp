#include <vector>

int partition(std::vector<int> &vector, size_t start, size_t end) {
    int pivot = vector[end];
    int boundary = static_cast<int>(start - 1);
    for (int i = start; i <= end; ++i) {
        if (vector[i] <= pivot){
            auto tmp = vector[i];
            vector[i] = vector[++boundary];
            vector[boundary] = tmp;
        }
    }
    return boundary;
}

void sort(std::vector<int>& vector, int start, int end ){
    if (start >= end) return;

    auto boundary = partition(vector, start, end);

    sort(vector, start, boundary - 1);
    sort(vector,  boundary + 1, end);
}

void quickSort(std::vector<int>& vector){
    sort(vector, 0, static_cast<int>(vector.size() - 1));
}