#include <iostream>;

using namespace std;

int main() {

	int userInput, reminderNumber;

	cout << "Please print your number for getting their digits: ";
	cin >> userInput;

	while (userInput > 0) {
		reminderNumber = userInput % 10;
		cout << "\nThe last part of digit is: " << reminderNumber;
		userInput = userInput / 10;
		cout << "\nWhat staying after removing the last digit: " << userInput;
	}

	return 0;
}