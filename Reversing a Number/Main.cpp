#include <iostream>;

using namespace std;

int main() {

	int userInput = 0, remember, reversedNumber = 0;

	cout << "Please enter a Number for reversing it: ";
	cin >> userInput;

	while (userInput > 0) {
		remember = userInput % 10;
		userInput = userInput / 10;
		reversedNumber = reversedNumber * 10 + remember;
	}

	cout << reversedNumber;

	return 0;
}