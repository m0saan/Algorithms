//
// Created by moboustt on 9/28/20.
//

#include <vector>

int rec_ternary_search(std::vector<int>& vector, const int& target, int left, int right){

    if (left > right) return -1;

    int partition_size = static_cast<int>((right - left) / 3);
    int middle1 = left + partition_size;
    int middle2 = right - partition_size;

    if (vector[middle1] == target) return middle1;
    if (vector[middle2] == target) return middle2;

    if (vector[middle1] > target)
        return rec_ternary_search(vector, target, left, middle1 - 1);
    else if (vector[middle2] < target)
        return rec_ternary_search(vector, target, middle2 + 1, right);
    else if (vector[middle1] < target && vector[middle2] > target)
        return rec_ternary_search(vector, target, middle1 + 1, middle2 - 1);
    return -1;
}

int ternary_search(std::vector<int>& vector, const int& target){
    return rec_ternary_search(vector, target, 0, static_cast<int>(vector.size() - 1));
}