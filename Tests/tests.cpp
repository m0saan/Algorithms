//
// Created by one for all on 24/09/2020.
//

#include <gtest/gtest.h>
#include <iostream>
#include <vector>
#include "../bubble_sort.cpp"
#include "../selection_sort.cpp"
#include "../insertion_sort.cpp"
#include "../merge_sort.cpp"
#include "../quick_sort.cpp"

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


TEST(MergeSort, OddNumOfElementsCase) {
    std::vector<int> v1 { 8, 2, 4, 1, 3, 5, 2, 1, 0, 99, 3, 4, 5, 4, 4};
    std::vector<int> v2 { 7, 3, 5, 2, 3, 1, 5, 8};
    std::vector<int> v {8, 2, 4, 1, 3};
    std::vector<int> vResult{1, 2, 3, 4, 8};

    mergeSort(v);
    mergeSort(v1);
    mergeSort(v2);

    ASSERT_EQ(v, vResult);
    ASSERT_EQ(v1, (std::vector<int> { 0, 1, 1, 2, 2, 3, 3, 4, 4, 4, 4, 5, 5, 8, 99 } ));
    ASSERT_EQ(v2, (std::vector<int> {  1, 2, 3, 3, 5, 5, 7, 8 } ));
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
