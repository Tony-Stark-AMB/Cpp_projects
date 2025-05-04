#include <iostream>;

using namespace std;

int main() {


	int year;

	cout << "Please enter your year, and I will check it leap ot not: ";
	cin >> year;
	if (year % 400 == 0 && year % 4 == 0) {
		cout << "Your year " << year << " is leap";
	}
	else {
		cout << "Your year " << year << " is NOT leap";
	}

	return 0;

}