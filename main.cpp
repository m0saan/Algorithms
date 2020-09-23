#include <iostream>
#include <vector>
#include "bubble_sort.cpp"
#include "selection_sort.cpp"

std::ostream& operator<<(std::ostream& o, std::vector<int>& vector){
    for(auto & elem : vector)
        o << elem << ' ';
    return o;
}

int main() {

    std::vector<int> v { 8, 2, 4, 1, 3, 13, 0, 25, 4, 77, 9 , 6, 3 ,2 , 99 };
    selectionSort(v);
    std::cout << v << std::endl;
    return 0;
}
