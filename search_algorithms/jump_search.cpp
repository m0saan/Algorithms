//
// Created by moboustt on 9/28/20.
//

#include <vector>
#include <cmath>

int jumpSearch(std::vector<int>& vector, const int& target) {
    size_t blockSize = sqrt(vector.size());
    size_t start = 0;
    size_t next = blockSize;
    while (start < vector.size() && next <= vector.size()){
        if (target <= vector[start + blockSize -1]){
            while (start < start + blockSize)
                if (vector[start++] == target) return static_cast<int>(start -1);
        }
        start = next;
        next += blockSize;
    }
    return -1;
}