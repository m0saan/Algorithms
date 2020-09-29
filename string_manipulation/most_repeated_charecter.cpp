//
// Created by moboustt on 9/29/20.
//

#include <string>
#include <array>

char findMostRepeatedCharacter(std::string& inputStr){
    if (inputStr.empty()) throw std::runtime_error{ "Empty string" };
    constexpr auto ASCII_SIZE = 256;
    std::array<int, ASCII_SIZE> array {};
    for (char& ch : inputStr)
        array[ch]++;
    char result {};
    unsigned char iMax {};
    for(size_t i {}; i < ASCII_SIZE; i++)
        if (iMax < array[i]) {
            iMax = array[i];
            result = i;
        }
    return result;
}
