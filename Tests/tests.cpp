//
// Created by one for all on 24/09/2020.
//

#include <gtest/gtest.h>
#include <iostream>
#include <vector>
#include "../bubble_sort.cpp"
#include "../selection_sort.cpp"

TEST(BubbleSort, OddNumOfElementsCase) {

    std::vector<int> v{8, 2, 4, 1, 3};
    std::vector<int> vResult{1, 2, 3, 4, 8};

    bubbleSort(v);
    ASSERT_EQ(v, vResult);
}

TEST(BubbleSort, EvenNumOfElementsCase){
    std::vector<int> v{8, 2};
    bubbleSort(v);
    ASSERT_EQ(v, (std::vector<int> { 2, 8 }));
}

TEST(BubbleSort, EmptyArray){
    std::vector<int> v{};
    auto v2 = v;
    bubbleSort(v);

    ASSERT_EQ(v, v2);

}