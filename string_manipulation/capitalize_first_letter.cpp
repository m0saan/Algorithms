//
// Created by moboustt on 9/29/20.
//

#include <string>
#include <sstream>
#include <numeric>
#include <vector>

void capitalizeFirstLetter(std::string& inputStr){
    std::istringstream iStringStream(inputStr);
    inputStr.clear();
    auto bindTwoStrings = [] (std::string lhs, std::string rhs) -> std::string {
        if (islower(lhs[0])) lhs[0] -= 32;
        if (islower(rhs[0])) rhs[0] -= 32;
        return lhs.empty() ? rhs : lhs + " " + rhs;
    };
    inputStr = std::accumulate(std::istream_iterator<std::string>(iStringStream), std::istream_iterator<std::string>(), inputStr, bindTwoStrings);
}

void capitalizeFirstLetter2(std::string& inputStr){

    std::istringstream iStringStream(inputStr);
    std::vector<std::string> v;

    auto comp = [](std::string str) mutable {
        std::transform(str.begin(), str.end(), str.begin(), tolower);
        str[0] = toupper(str[0]);
        return std::move(str);
    };
    auto bindTwoStrings = [] (std::string& lhs, std::string& rhs) -> std::string {
        return lhs.empty() ? std::move(rhs) : std::move(lhs + " " + rhs);
    };

    std::transform(std::istream_iterator<std::string>(iStringStream), std::istream_iterator<std::string>(), std::back_inserter(v), comp);
    inputStr.clear();
    inputStr  = std::accumulate(v.begin(), v.end(), inputStr, bindTwoStrings);
}
