#include <iostream>;

using namespace std;

int main() {

	int sum = 0, number;

	cout << "Please enter the number wo which your want to know sum: ";
	cin >> number;

	for (int i = 1; i <= number; i++) {
		int sumBefore = sum;
		sum += i;
		cout << sumBefore << " + " << i << " = " << sum << endl;
	}

	return 0;
}