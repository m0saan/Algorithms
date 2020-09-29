//
// Created by moboustt on 9/28/20.
//

#include <string>
#include <stack>
#include <sstream>
#include <iostream>

void reverseWordsOrder(std::string &string)
{
    std::stack<std::string> stack;
    std::istringstream inputString(string);
    size_t iCount{};
    auto comp = [&stack, &iCount](auto &value) { stack.push(value); iCount++; };
    std::for_each(std::istream_iterator<std::string>(inputString), std::istream_iterator<std::string>(), comp);
    while (!stack.empty())
    {
        std::cout << stack.top();
        if (iCount-- > 1)
            std::cout << " ";
        stack.pop();
    }
}
