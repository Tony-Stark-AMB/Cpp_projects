#include <iostream>;

using namespace std;

int main() {

	int mark1, mark2, mark3, average;

	cout << "Please enter mark of first subject from 1 to 100: ";
	cin >> mark1;
	cout << "Please enter mark of second subject from 1 to 100: ";
	cin >> mark2;
	cout << "Please enter mark of third subject from 1 to 100: ";
	cin >> mark3;

	average = (mark1 + mark2 + mark3) / 3;

	if (average >= 65) {
		cout << "A";
	}
	else if (average < 65 && average >= 35) {
		cout << "B";
	}
	else {
		cout << "C";
	}

	return 0;
}