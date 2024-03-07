#include "BinaryToDecimal.hpp"
#include <cmath>
#include <string>

// Определение функции для перевода с двоичной в десятичную систему счисления
int binaryToDecimal(const std::string &binaryString) {
    int decimalNumber = 0;
    string::size_type length = binaryString.length(); // Используем std::string::size_type вместо int

    for (std::string::size_type i = 0; i < length; ++i) {
        if (binaryString[i] == '1') {
            decimalNumber += static_cast<int>(std::pow(2, length - i - 1));
        }
    }
    return decimalNumber;
}
