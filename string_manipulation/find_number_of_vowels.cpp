//
// Created by moboustt on 9/28/20.
//

#include <string>
#include <set>

size_t findNumberOfVowels(const std::string& string){
    if (string.empty()) return 0;
    std::set<char> vowels{ 'e', 'u', 'i', 'o', 'a' };
    size_t counter {};
    for (char i : string)
        if (vowels.count(tolower(i))) counter++;
    return counter;
}