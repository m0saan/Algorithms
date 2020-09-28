//
// Created by moboustt on 9/28/20.
//

#include <vector>

template<typename T>
int iterative_binary_search(std::vector<T>& vector, const T& target){
    int left { 0 };
    int right { static_cast<int>(vector.size() - 1) };
    int middle { static_cast<int>((left + right) / 2) };
    while(left <= right){
        if (target == vector[middle]) return middle;
        if (vector[middle] > target)
            right = middle - 1;
        else left = middle + 1;
        middle = static_cast<int>((left + right) / 2);
    }
    return -1;
}
