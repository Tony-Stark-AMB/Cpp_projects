#include <iostream>;

using namespace std;

int main() {

	int result, amount;

	cout << "Please enter your Amount from your Bill: ";
	cin >> amount;
	
	if (amount >= 500) {
		result = amount * 0.8; // скидка 20%;
	}
	else if (amount >= 100 && amount < 500) {
		result = amount * 0.9; // скидка 10%;
	}
	else {
		result = amount;
	}

	cout << "Your bill after discount: " << result;


	return 0;

}