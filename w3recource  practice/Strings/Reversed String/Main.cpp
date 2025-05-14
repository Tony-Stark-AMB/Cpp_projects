#include <iostream>;
#include <cstring>;

int main() {

	using std::cout;
	using std::endl;

	char userInput[100];
	std::string reversedString = "";

	cout << "Please enter your string: " << endl;
	std::cin.getline(userInput, 100);

	for (int i = strlen(userInput) - 1; i >= 0; i--) {
		reversedString += userInput[i];
	}

	cout << "Start string: " << userInput << "\n\n" << "Reversed string: " << reversedString << endl;
	return 0;
}