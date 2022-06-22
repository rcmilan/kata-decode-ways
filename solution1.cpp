#include <iostream>
#include <string>
#include <map>

class Solution1 {

private:
    std::map<int, char> _intCharMap = {
        { 1, 'A' },
        { 2, 'B' },
        { 3, 'C' },
        { 4, 'D' },
        { 5, 'E' },
        { 6, 'F' },
        { 7, 'G' },
        { 8, 'H' },
        { 9, 'I' },
        { 10, 'J' },
        { 11, 'K' },
        { 12, 'L' },
        { 13, 'M' },
        { 14, 'N' },
        { 15, 'O' },
        { 16, 'P' },
        { 17, 'Q' },
        { 18, 'R' },
        { 19, 'S' },
        { 20, 'T' },
        { 21, 'U' },
        { 22, 'V' },
        { 23, 'W' },
        { 24, 'X' },
        { 25, 'Y' },
        { 26, 'Z' }
    };

    char decode(int code) {
        if(code <= 0 || code > 26) return '\0';

        char mappedChar = _intCharMap.find(code)->second;

        std::cout << "Decoded Char: " << mappedChar << std::endl;

        return mappedChar;
    };



public:
    int numDecodings(std::string s) {
        std::cout << "Encoded Message: " << s << std::endl;

        for (int i = 0; i< s.length(); i++)
        {
            std::string code = {s[i]};

            int subString = std::stoi(code);
            
            decode(subString);
        }
        
        return 0;
    }
};

/*

5, 1
    {0},{1},{2},{3},{4} : 5
5, 2
    {0,1},{1,2},{2,3},{3,4} : 4
5, 3
    {0,1,2},{1,2,3},{2,3,4} : 3
5, 4
    {0,1,2,3},{1,2,3,4} : 2
5, 5
    {0,1,2,3,4} : 1

*/