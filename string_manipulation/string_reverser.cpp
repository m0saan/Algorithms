//
// Created by moboustt on 9/28/20.
//

#include <string>
#include <stack>

void stringReverser(std::string& string){
    if (string.empty()) return;
    std::stack<int> characters {};
    size_t iStr {};
    for(char ch : string)
        characters.push(ch);
    while (!characters.empty()) {
        string[iStr++] = characters.top();
        characters.pop();
    }
}
