#include <iostream>;

using namespace std;

int main() {

	cout << "Menu: \n" << "1. Add\n" << "2. Sub\n" << "3. Mul\n"<< "4. Div\n";
	cout << "Please enter your choice from 1 to 4: ";

	int userAction, num1, num2, result;
	cin >> userAction;
	cout << "Please enter 1 number: ";
	cin >> num1;
	cout << "Please enter 2 number: ";
	cin >> num2;

	switch (userAction) {
		case 1:
			result = num1 + num2;
			break;
		case 2:
			result = num1 - num2;
			break;
		case 3:
			result = num1 * num2;
			break;
		case 4:
			result = num1 / num2;
			break;
	}

	cout << "Answer is: " << result;

	return 0;
}