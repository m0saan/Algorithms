//
// Created by one for all on 24/09/2020.
//

#include <gtest/gtest.h>
#include <iostream>
#include <vector>
#include "../sort_algorithms/bubble_sort.cpp"
#include "../sort_algorithms/selection_sort.cpp"
#include "../sort_algorithms/insertion_sort.cpp"
#include "../sort_algorithms/merge_sort.cpp"
#include "../sort_algorithms/quick_sort.cpp"
#include "../sort_algorithms/counting_sort.cpp"
#include "../sort_algorithms/bucket_sort.cpp"

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

TEST(QuickSort, OddNumOfElementsCase) {
    std::vector<int> v1 { 8, 2, 4, 1, 3, 5, 2, 1, 0, 99, 3, 4, 5, 4, 4};
    std::vector<int> v2 { 7, 3, 5, 2, 3, 1, 5, 8};
    std::vector<int> v {8, 2, 4, 1, 3};
    std::vector<int> vResult{1, 2, 3, 4, 8};

    quickSort(v);
    quickSort(v1);
    quickSort(v2);

    ASSERT_EQ(v, vResult);
    ASSERT_EQ(v1, (std::vector<int> { 0, 1, 1, 2, 2, 3, 3, 4, 4, 4, 4, 5, 5, 8, 99 } ));
    ASSERT_EQ(v2, (std::vector<int> {  1, 2, 3, 3, 5, 5, 7, 8 } ));
}

TEST(QuickSort, EvenNumOfElementsCase){
    std::vector<int> v{8, 2};
    quickSort(v);
    ASSERT_EQ(v, (std::vector<int> { 2, 8 }));
}

TEST(QuickSort, EmptyArray){
    std::vector<int> v{};
    auto v2 = v;
    quickSort(v);

    ASSERT_EQ(v, v2);

}

TEST(CountingSort, OddNumOfElementsCase) {
    std::vector<int> v1 { 8, 2, 4, 1, 3, 5, 2, 1, 0, 99, 3, 4, 5, 4, 4};
    std::vector<int> v2 { 7, 3, 5, 2, 3, 1, 5, 8};
    std::vector<int> v {8, 2, 4, 1, 3};
    std::vector<int> vResult{1, 2, 3, 4, 8};

    countingSort(v);
    countingSort(v1);
    countingSort(v2);

    ASSERT_EQ(v, vResult);
    ASSERT_EQ(v1, (std::vector<int> { 0, 1, 1, 2, 2, 3, 3, 4, 4, 4, 4, 5, 5, 8, 99 } ));
    ASSERT_EQ(v2, (std::vector<int> {  1, 2, 3, 3, 5, 5, 7, 8 } ));
}

TEST(CountingSort, EvenNumOfElementsCase){
    std::vector<int> v{8, 2};
    countingSort(v);
    ASSERT_EQ(v, (std::vector<int> { 2, 8 }));
}

TEST(CountingSort, EmptyArray){
    std::vector<int> v{};
    auto v2 = v;
    countingSort(v);

    ASSERT_EQ(v, v2);

}


TEST(BucketSort, OddNumOfElementsCase) {
    std::vector<int> v1 { 8, 2, 4, 1, 3, 5, 2, 1, 0, 99, 3, 4, 5, 4, 4};
    std::vector<int> v2 { 7, 3, 5, 2, 3, 1, 5, 8};
    std::vector<int> v {8, 2, 4, 1, 3};
    std::vector<int> vResult{1, 2, 3, 4, 8};

    bucketSort(v, 4);
    bucketSort(v1, 4);
    bucketSort(v2, 3);

    ASSERT_EQ(v, vResult);
    ASSERT_EQ(v1, (std::vector<int> { 0, 1, 1, 2, 2, 3, 3, 4, 4, 4, 4, 5, 5, 8, 99 } ));
    ASSERT_EQ(v2, (std::vector<int> {  1, 2, 3, 3, 5, 5, 7, 8 } ));
}

TEST(BucketSort, EvenNumOfElementsCase){
    std::vector<int> v{8, 2};
    bucketSort(v, 2);
    ASSERT_EQ(v, (std::vector<int> { 2, 8 }));
}

TEST(BucketSort, EmptyArray){
    std::vector<int> v{};
    auto v2 = v;
    bucketSort(v, 2);

    ASSERT_EQ(v, v2);

}
