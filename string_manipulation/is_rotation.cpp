#include <string>
#include <map>
#include <iostream>

bool isRotation1(std::string &str1, std::string &str2)
{
    if (str1.size() != str2.size())
        return false;

    std::map<char, char> map{
        {'A', 'B'},
        {'B', 'C'},
        {'C', 'D'},
        {'D', 'A'},
    };
    for (size_t i = 0; i < str1.size() && i + 1 < str1.size(); i++)
        if (map[str2[i]] != str2[i + 1])
            return false;
    return true;
}

bool isRotation2(std::string &str1, std::string &str2)
{
    return str1.size() == str2.size() && str1.append(str2).find(str2);
}

#if (0)
int main()
{
    std::string str1{"ABCD"};
    std::string str2{"CDAB1"};

    std::cout << std::boolalpha << isRotation1(str1, str2) << std::endl;
    std::cout << std::boolalpha << isRotation2(str1, str2) << std::endl;
    return 0;
}
#endif