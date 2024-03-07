#include <iostream>
#include "tenInTwo.hpp"
using namespace std;

void clearConsole() {
    #ifdef _WIN32
    system("cls");
    #else
    system("clear");
    #endif
}

string tenInTwo(int num) {
    if (num == 0) return "0";
    
    string binary = "";
    while (num > 0) {
        binary = (num % 2 == 1 ? "1" : "0") + binary;
        num /= 2;
    }
    return binary;
}

void printBinaryConversionTenInTwo(int num) {
    string binaryNumber = tenInTwo(num);
    cout << "Number «" << num << "» in the binary system: «" << binaryNumber << "»" << endl;
    cout << endl;
}

void processTenInTwo() {
    int repeat = 1;
        while (repeat == 1) {
            int number;
            cout << "Write number for convert in binary system: ";
            cin >> number;
            printBinaryConversionTenInTwo(number);
            
            cout << "Choice optional:\n"
                 << "\t[1] for repeat\n"
                 << "\t[0] for exit\n"
                 << endl
                 << "Write: ";
            cin >> repeat;
            cout << endl;
        }
}
