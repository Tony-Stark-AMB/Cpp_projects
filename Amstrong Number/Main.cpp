#include <iostream>;

using namespace std;

int main() {

	int userInput = 0, reminder, rememberUserInput, sum = 0;

	cout << "Please enter a number to check does it AMSTRONG or NOT AMSTRONG: ";
	cin >> userInput;

	rememberUserInput = userInput;

	while (userInput > 0) {
		reminder = userInput % 10;
		userInput = userInput / 10;
		sum = sum + reminder * reminder * reminder;
	}

	if (rememberUserInput == sum) {
		cout << "Number: " << rememberUserInput << " is AMSTRONG";
	}
	else {
		cout << "Number: " << rememberUserInput << " is NOT AMSTRONG";
	}


	return 0;
}