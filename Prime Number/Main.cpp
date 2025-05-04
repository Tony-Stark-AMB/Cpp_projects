#include <iostream>;

using namespace std;

int main() {

	int userInput, counter = 0;

	cout << "Please enter a number, for checking does it PRIME of NOT PRIME: ";
	cin >> userInput;

	for (int i = 1; i <= userInput; i++) {
		if (userInput % i == 0) {
			counter++;
		}
	}
	if (counter > 2) {
		cout << "Number " << userInput << " " << " NOT PRIME number";
	}
	else {
		cout << "Number " << userInput << " " << " PRIME number";
	}

	return 0;
}