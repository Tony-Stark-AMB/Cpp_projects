#include <iostream>;

using namespace std;

int main() {

	int factorial = 1, number;

	cout << "Please enter a number to which you would like to get factorial: ";
	cin >> number;

	for (int i = 1; i <= number; i++) {
		int factorialBefore = factorial;
		factorial *= i;
		cout << factorialBefore << " * " << i << " = " << factorial << endl;
	}
	cout << "Factorial of " << number << " is : " << factorial;



	return 0;
}