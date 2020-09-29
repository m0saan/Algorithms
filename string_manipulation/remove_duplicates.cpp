#include <set>
#include <string>
#include <iostream>

void removeDuplicates(std::string &str)
{
    if (!str.length())
        return;
    std::set<char> setOfChars{};
    size_t iCounter {};

    for (; iCounter < str.size();) {
        if (setOfChars.count(str[iCounter])) {
            str.erase(iCounter, 1);
            continue;
        }
        setOfChars.insert(str[iCounter]);
        iCounter++;
    }
}

int main()
{
    std::string str{""};
    removeDuplicates(str);
    std::cout << str << std::endl;
    return 0;
}