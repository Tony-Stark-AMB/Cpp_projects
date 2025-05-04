#include <iostream>;

using namespace std;

int main() {

	string dayNames[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun" };
	int inputNumber;

	cout << "Print number of the day from 1 to 7: ";
	cin >> inputNumber;
	for (int i = 0; i < 7; i++) {
		if (i == inputNumber - 1) {
			cout << dayNames[i];
		}
	}


	return 0;
}