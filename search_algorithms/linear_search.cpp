//
// Created by moboustt on 9/28/20.
//

#include <vector>

template<typename T>
int linearSearch(std::vector <T> &vector, T &item) {
    for (size_t i{}; i < vector.size(); ++i)
        if (item == vector[i]) return i;
    return -1;
}
