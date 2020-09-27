#include <gtest/gtest.h>


std::ostream& operator<<(std::ostream& o, std::vector<int>& vector){
    for(auto & elem : vector)
        o << elem << ' ';
    return o;
}


int main(int ac, char **av) {

    testing::InitGoogleTest(&ac, av);
    RUN_ALL_TESTS();

    return 0;
}
