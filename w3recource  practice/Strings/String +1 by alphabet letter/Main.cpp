#include <iostream>
#include <string>
#include <cstring>

int main() {
	using std::cout;
	using std::endl;

	char userInput[100];
	std::string resultOfNextLetter = "";
	cout << "Please, enter the word\nAnd I`ll convert every letter\nTo next one in alphabet:" << endl;
	std::cin.getline(userInput, 100);

	for (int i = 0; i < strlen(userInput); i++) {
		if (int(userInput[i]) == ' ') 
			resultOfNextLetter += userInput[i];
		else 
			resultOfNextLetter += (char)(((int)userInput[i]) + 1);
	}

	cout << "String before: " << userInput << "\nString after: " << resultOfNextLetter << endl;

	return 0;
}