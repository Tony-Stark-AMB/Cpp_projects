#include <iostream>;

using namespace std;

int main() {

	int number;

	cout << "Please enter the number to create a table of multiptiplication for it:";
	cin >> number;

	for (int i = 1; i <= 10; i++) {
		int multiplication = number * i;
		cout << "\n" << number << " * " << i << " = " << multiplication << endl;
	}


	return 0;

}