//
// Created by moboustt on 9/28/20.
//

#include <vector>

template<typename T>
int re_binary_search(std::vector<T>& vector, const T& target, int left, int right){
    if (left > right) return -1;

    int middle = static_cast<int>((left + right) / 2);

    if (vector[middle] == target) return middle;

    if (vector[middle] > target)
        return re_binary_search(vector, target, left, middle - 1);
    else
        return re_binary_search(vector, target, middle + 1, right);
}

template<typename T>
int recursive_binary_search(std::vector<T>& vector, const T& target){

    return re_binary_search(vector, target, 0, static_cast<int>(vector.size() - 1));
}