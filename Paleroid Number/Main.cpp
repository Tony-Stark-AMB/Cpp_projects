#include <iostream>;

using namespace std;

int main() {


	int userInput, r, rev = 0, m;

	cout << "Please enter a number for checking does it PALEROID: ";
	cin >> userInput;

	m = userInput;

	while (userInput > 0) {
		r = userInput % 10;
		userInput = userInput / 10;
		rev = rev * 10 + r;
	}

	if (rev == m) {
		cout << "Number is PALEROID";
	}
	else {
		cout << "Number is NOT PALEROID";
	}

	return 0;
}