#include <iostream>
#include <string>
//วิธีที่2
void strrev(std::string &str)
{
    int len = str.length();
    int j = len;
    std::string tmp;

    for (int i = 0;i < len;i++)
    {
        tmp += str[j - 1];
        j--;
    }
    str = tmp;
}

int main()
{
    std::string str;

    std::cin >> str;
    
    strrev(str);
    std::cout << str << "\n";
}