//
// Created by moboustt on 9/29/20.
//

#include <string>

bool isPalindrome(std::string& str){
    for (size_t i{}, j{ str.length() - 1}; i < str.size() && j > i; ++i, j--)
        if (str[i] != str[j]) return false;
    return true;
}

bool isPalindrome2(std::string& str){
    return str == std::string {str.rbegin(), str.rend() };
}
