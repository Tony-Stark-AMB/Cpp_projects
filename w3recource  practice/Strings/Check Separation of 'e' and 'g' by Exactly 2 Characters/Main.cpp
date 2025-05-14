#include <iostream>
#include <string>
#include <cctype>

static bool Separation_E_and_G_Condition(char cur, char curNextTwo, char firstK, char secondK) {
	return (
		(cur == firstK || cur == std::toupper(firstK)) &&
		(curNextTwo == secondK || curNextTwo == std::toupper(secondK))
		);
}

static int Separation_E_and_G(std::string text) {
	int count = 0;

	for (size_t i = 0; i < text.length() - 2; i++) {
		const char ch = text[i];
		const char chSep = text[i + 2];

		bool eToG = Separation_E_and_G_Condition(ch, chSep, 'e', 'g');
		bool gToE = Separation_E_and_G_Condition(ch, chSep, 'g', 'e');

		if (eToG || gToE) {
			count++;
		}
	}

	return count;
}


int main() {
	using std::cout;
	using std::cin;
	using std::endl;

	char userInput[100];

	cout << "Please, enter a string: ";
	cin.getline(userInput, 100);
	int result = Separation_E_and_G(userInput);
	std::cout << "Matches found: " << result << std::endl;
}