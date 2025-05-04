#include <iostream>;

using namespace std;

int main() {
		
	float b, h, a;
	cout << "Print 2 heights\n\n";
	cout << "Print 1 height: ";
	cin >> b;
	cout << "Print 2 height: ";
	cin >> h;
	a = (b * h) / 2;

	cout << "Area of triangle\n\nwith 1 height: " << b << "\nand 2 height: " << h << "\nis: " << a;
	return 0;
}


