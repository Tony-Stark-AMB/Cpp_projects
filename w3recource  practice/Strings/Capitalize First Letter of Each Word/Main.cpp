#include <iostream>
#include <cstring>

int main() {
	using std::cout;
	using std::endl;
	
	char userInput[100];
	std::string capitalizedString = "";
	bool beginWord = true;

	cout << "Please, enter string where you want capitalize first letters: " << endl;
	std::cin.getline(userInput, 100);

	for (int i = 0; i <= strlen(userInput); i++) {
		char ch = userInput[i];

		if (ch == ' ') {
			capitalizedString += ch;
			beginWord = true;
		}
		else if (beginWord && ch >= 'a' && ch <= 'z') {
			capitalizedString += ch - 32;  // to uppercase
			beginWord = false;
		}
		else {
			capitalizedString += ch;
			beginWord = false;
		}
	}

	cout << capitalizedString << endl;
	return 0;
}