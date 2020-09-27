#include <gtest/gtest.h>
#include "../search_algorithms/linear_search.cpp"
TEST(LinearSearch, LinearSearchAllTestCases){
    std::vector<int> vectorOfIntegers{ 1, 3,4,6,8,9,0,10,4,11 };
    std::vector<const char*> vectorOfStrings{ "1", "3","4","6","8","9","0","10","4", "11" };

    ASSERT_EQ(linearSearch(vectorOfIntegers, 4), 2);
    ASSERT_EQ(linearSearch(vectorOfStrings, static_cast<const char*>("0")), 6);
    ASSERT_EQ(linearSearch(vectorOfStrings, static_cast<const char*>("111")), -1);
}