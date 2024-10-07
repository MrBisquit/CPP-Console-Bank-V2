#include <iostream>
#include <string>
#include "Displays.h"
#include "Types.h"

void Displays::MainScreen(Types::Bank bank) {
	std::string total_bank_string = std::to_string(bank.total_bank);

	std::cout << "+" << std::string(31 + bank.name.size(), '-') << "+" << std::endl;
	std::cout << "| Bank name:" << std::string((30 + bank.name.size()) - 10, ' ') << "|" << std::endl;
	std::cout << "| " << bank.name << std::string(30, ' ') << "|" << std::endl;
	std::cout << "| Total in bank:" << std::string((30 + bank.name.size()) - 14, ' ') << "|" << std::endl;
	std::cout << "| " << total_bank_string << std::string((30 + bank.name.size()) - total_bank_string.size(), ' ') << "|" << std::endl;
	std::cout << "+" << std::string(31 + bank.name.size(), '-') << "+" << std::endl;
}

void Displays::DisplayMainMenu() {
	printf(" ----- Main Menu -----\n");
	printf(" Key  Option\n");
	printf(" LI   Login to an account\n");
	printf(" CA   Create an account\n");
	printf(" VA   View alerts\n");
	printf(" VU   View users (As a table)\n");
	printf(" S    Settings\n");
}