#include <iostream>;

using namespace std;

int main() {

	float num1, num2;

	cout << "Please enter number 1:";
	cin >> num1;
	cout << "Please enter number 2:";
	cin >> num2;

	if (num1 > num2) {
		cout << "Number: " << num1 << " is MAX number";
	}
	else {
		cout << "Number: " << num2 << " is MAX number";
	}
		
	

	

	return 0;
}