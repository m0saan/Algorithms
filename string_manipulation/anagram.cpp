//
// Created by moboustt on 9/29/20.
//

#include <string>
#include <map>
#include <iostream>

size_t getAsciiValue(std::string& str) {
    size_t iCounter {};
    for (char & c : str)
        iCounter += c;
    return iCounter;
}

bool areAnagrams(std::string& s1, std::string& s2){
    return s1.size() == s2.size() && getAsciiValue(s1) == getAsciiValue(s2);
}

bool areAnagrams2(std::string& s1, std::string& s2){
    if (s1.size() != s2.size()) return false;

    std::map<char, int> map1;
    std::map<char, int> map2;
    for (size_t i = 0; i < s1.length(); ++i) {
        map1[s1[i]] += 1;
        map2[s2[i]] += 1;
    }
    return map1 == map2;
}