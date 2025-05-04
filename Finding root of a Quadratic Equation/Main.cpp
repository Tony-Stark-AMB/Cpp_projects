#include <iostream>

using namespace std;

int main() {

	int a, b, c;

	int r1, r2;

	cout << "Enter a, b, c";
	cin >> a >> b >> c;

	r1 = ( -b + sqrt(b * b - 4 * a * c)) / (2 * a);
	r2 = ( -b - sqrt(b * b - 4 * a * c)) / (2 * a);

	cout << "Root of plus is: " << r1 << "\n";
	cout << "Root of minus is: " << r2 << "\n";
	return 0;
}