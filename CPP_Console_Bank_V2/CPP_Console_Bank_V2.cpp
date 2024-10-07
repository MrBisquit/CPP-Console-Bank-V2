#include <iostream>
#include <vector>

#include "Types.h"
#include "Displays.h"

// Predefines
void BeginSetup();

void clear() { system("cls"); }

Types::Bank bank;

int main()
{
    bank = Types::Bank();

    BeginSetup();
    std::cout << "Starting bank...\n";
    clear();

    while (true) {
        // Call "break;" to exit cycle

        clear();

        Displays::MainScreen(bank);

        printf("\n\n");

        Displays::DisplayMainMenu();

        std::string option;
        std::cin >> option;
    }
}

void BeginSetup() {
    printf("--- 1: Would you like to enable saving?\n    1: Yes\n    2: No, Just use memory\n Choice: ");
    int option1 = 0;
    int option1B = 0;
    while (option1 != 1 && option1 != 2) {
        std::cin >> option1;
        printf("         Please select a valid option.\n Choice: ");
    }

    clear();

    if (option1 == 1) {
        printf("-- 1B: Would you like to load from a directory?\n    1: Yes\n    2: No\n Choice: ");
        
        while (option1B != 1 && option1B != 2) {
            std::cin >> option1B;
            printf("         Please select a valid option.\n Choice: ");
        }

        clear();
    }

    if (option1B != 1) {
        printf("--- 2: Starting bank value: ");
        std::cin >> bank.total_bank;

        clear();

        printf("--- 3: Give it a name: ");
        std::cin >> bank.name;
    }
}