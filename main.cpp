#include <gtest/gtest.h>
//#include "quick_sort.cpp"
//#include "merge_sort.cpp"


std::ostream& operator<<(std::ostream& o, std::vector<int>& vector){
    for(auto & elem : vector)
        o << elem << ' ';
    return o;
}


int main(int ac, char **av) {
/*
    std::vector<int> v { 8, 2, 4, 1, 3, 5, 2, 1, 0, 99, 3, 4, 5, 4, 4};
    std::vector<int> v1 { 15, 6, 3, 1, 22, 10, 13 };
    std::vector<int> v2 { 7, 3, 5, 2, 3, 1, 5, 8};
    quickSort(v1);
    std::cout << v1 << std::endl;
    */

    testing::InitGoogleTest(&ac, av);
    RUN_ALL_TESTS();

    return 0;
}
