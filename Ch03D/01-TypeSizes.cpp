#include <iostream>
//code from https://web.archive.org/web/20180706171154/http://www.learncpp.com/cpp-tutorial/23-variable-sizes-and-the-sizeof-operator/

int main()
{
    std::cout << "bool:\t\t\t" << sizeof(bool) << " bytes" << std::endl;
    std::cout << "char:\t\t\t" << sizeof(char) << " bytes" << std::endl;
    std::cout << "wchar_t:\t\t" << sizeof(wchar_t) << " bytes" << std::endl;
    std::cout << "char16_t:\t\t" << sizeof(char16_t) << " bytes" << std::endl; // C++11, may not be supported by your compiler
    std::cout << "char32_t:\t\t" << sizeof(char32_t) << " bytes" << std::endl; // C++11, may not be supported by your compiler
    std::cout << "short:\t\t\t" << sizeof(short) << " bytes" << std::endl;
    std::cout << "int:\t\t\t" << sizeof(int) << " bytes" << std::endl;
    std::cout << "long:\t\t\t" << sizeof(long) << " bytes" << std::endl;
    std::cout << "long long:\t\t" << sizeof(long long) << " bytes" << std::endl; // C++11, may not be supported by your compiler
    std::cout << "float:\t\t\t" << sizeof(float) << " bytes" << std::endl;
    std::cout << "double:\t\t\t" << sizeof(double) << " bytes" << std::endl;
    std::cout << "long double:\t" << sizeof(long double) << " bytes" << std::endl;
    std::cout << "size_t:\t\t\t" << sizeof(size_t) << " bytes" << std::endl; //I added this
    return 0;
}
