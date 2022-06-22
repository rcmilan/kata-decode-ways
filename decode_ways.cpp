#include <iostream>
#include <string>

#include "solution1.cpp"

int main()
{
    std::cout << "Kata - Decode Ways" << std::endl;

    std::cout << "Enter Encoded Message:" << std::endl;
    
    std::string encodedMessage;

    std::cin >> encodedMessage;

    int result = Solution1().numDecodings(encodedMessage);

    return 0;
}