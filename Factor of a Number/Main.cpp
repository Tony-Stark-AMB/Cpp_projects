#include <iostream>;

using namespace std;

int main() {

	int userNumber;

	cout << "Please enter the number for what you want to know factor: ";
	cin >> userNumber;

	for (int i = 1; i <= userNumber; i++) {
		if (userNumber % i == 0) {
			cout << "\nFactor of " << userNumber << " can be " << i;
		}
	}
	


	return 0;
}