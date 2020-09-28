//
// Created by moboustt on 9/28/20.
//

#include <vector>
#include <cmath>
#include "recursive_binary_search.cpp"

int exponentialSearch(std::vector<int>& vector, const int& target){
    size_t bound = 1;
    while (target > vector[bound])
        bound = exp(bound);
    return re_binary_search(vector, target, static_cast<int>(bound / 2), bound);
}