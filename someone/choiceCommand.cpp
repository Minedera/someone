#include "choiceCommand.hpp"
#include "tenInTwo.hpp"
#include "twoInTen.hpp"

int textChoiceCommand() {
    int choice;
    cout << "Choice optional:\n"
         << "\t[1] Decimal > Binary\n"
         << "\t[2] Binary > Decimal\n"
         << "\t[3] About\n"
         << endl
         << "Write: ";
    cin >> choice;
    cout << endl;
    return choice;
}

void choiceCommand() {
    int choice = textChoiceCommand();
    
    switch (choice) {
        case 1:
            processTenInTwo();
            break;
        case 2:
            
            break;
        default:
            break;
    }
}
