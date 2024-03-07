#include <iostream>
#include <string>
#include "choiceCommand.hpp"
#include "about.hpp"
using namespace std;

void choiceStartMenu() {
    int choice;
    cout << "Choice optional:\n"
         << "\t[1] Choice command\n"
         << "\t[2] Help\n"
         << "\t[3] About\n"
         << endl
         << "Write: ";
    cin >> choice;
    cout << endl;

    switch (choice) {
        case 1:
            choiceCommand();
            break;
        case 2:
                
            break;
        case 3:
                
            break;
        default:
            cout << "Некорректный выбор. Пожалуйста, выберите снова.\n";
            break;
    }
    cout << endl;
}


int main() {
    choiceStartMenu();
    return 0;
}
