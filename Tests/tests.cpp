//
// Created by one for all on 24/09/2020.
//

#include <gtest/gtest.h>
#include <iostream>
#include <vector>
#include "../bubble_sort.cpp"
#include "../selection_sort.cpp"

TEST(BubbleSort, AllBubbleSortCases) {
    std::vector<int> v{8, 2, 4, 1, 3};
    selectionSort(v);
    std::vector<int> vResult{1, 2, 3, 4, 8};
    ASSERT_EQ(v, vResult);
}
