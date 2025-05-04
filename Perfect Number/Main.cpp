#include <iostream>;

using namespace std;

int main() {

	int userNumber, factorialSum = 0;


	cout << "Please enter to check that is number is perfect: ";
	cin >> userNumber;

	for (int i = 1; i <= userNumber; i++) {
		cout << "\n" << userNumber % i;
		if (userNumber % i == 0) {
			factorialSum += i;
		}
	}
	if (factorialSum == userNumber * 2) {
		cout << "\nYour number " << userNumber << " is Perfect";
	}
	else {
		cout << "\nYour number " << userNumber << " is NOT Perfect";
	}
	

	return 0;
}