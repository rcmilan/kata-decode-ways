#include <iostream>
#include <string>

#include "solution1.cpp"
#include "solution2.cpp"
#include "solution3.cpp"
#include "solution4.cpp"

int main()
{
    std::cout << "Kata - Decode Ways" << std::endl;

    std::cout << "Enter Encoded Message:" << std::endl;
    
    std::string encodedMessage;

    std::cin >> encodedMessage;

    int result1 = Solution1().numDecodings(encodedMessage);
    int result2 = Solution2().numDecodings(encodedMessage);
    int result3 = Solution3().numDecodings(encodedMessage);
    int result4 = Solution4().numDecodings(encodedMessage);

    return 0;
}