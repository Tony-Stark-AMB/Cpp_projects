#include <iostream>;

using namespace std;

int main() {
	int sum, n;

	cout << "Print some number to find sum:\n";
	cin >> n;
	sum = n * (n + 1) / 2;
	cout << "Sum of number: " << n << "\nis: " << sum;
	return 0;
}