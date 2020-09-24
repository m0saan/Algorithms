//
// Created by one for all on 24/09/2020.
//

#include <gtest/gtest.h>
#include <iostream>
#include <vector>
#include "../bubble_sort.cpp"
#include "../selection_sort.cpp"
#include "../insertion_sort.cpp"
//#include "../merge_sort.cpp"

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

TEST(SelectionSort, OddNumOfElementsCase) {

    std::vector<int> v{8, 2, 4, 1, 3};
    std::vector<int> vResult{1, 2, 3, 4, 8};

    selectionSort(v);
    ASSERT_EQ(v, vResult);
}

TEST(SelectionSort, EvenNumOfElementsCase){
    std::vector<int> v{8, 2};
    selectionSort(v);
    ASSERT_EQ(v, (std::vector<int> { 2, 8 }));
}

TEST(SelectionSort, EmptyArray){
    std::vector<int> v{};
    auto v2 = v;
    selectionSort(v);

    ASSERT_EQ(v, v2);

}

TEST(InsertionSort, OddNumOfElementsCase) {

    std::vector<int> v{8, 2, 4, 1, 3};
    std::vector<int> vResult{1, 2, 3, 4, 8};

    insertion_sort(v);
    ASSERT_EQ(v, vResult);
}

TEST(InsertionSort, EvenNumOfElementsCase){
    std::vector<int> v{8, 2};
    insertion_sort(v);
    ASSERT_EQ(v, (std::vector<int> { 2, 8 }));
}

TEST(InsertionSort, EmptyArray){
    std::vector<int> v{};
    auto v2 = v;
    insertion_sort(v);

    ASSERT_EQ(v, v2);

}
/*
TEST(MergeSort, OddNumOfElementsCase) {

    std::vector<int> v{8, 2, 4, 1, 3};
    std::vector<int> vResult{1, 2, 3, 4, 8};

    mergeSort(v);
    ASSERT_EQ(v, vResult);
}

TEST(MergeSort, EvenNumOfElementsCase){
    std::vector<int> v{8, 2};
    mergeSort(v);
    ASSERT_EQ(v, (std::vector<int> { 2, 8 }));
}

TEST(MergeSort, EmptyArray){
    std::vector<int> v{};
    auto v2 = v;
    mergeSort(v);

    ASSERT_EQ(v, v2);

}
*/