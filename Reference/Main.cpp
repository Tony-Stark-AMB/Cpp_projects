#include <iostream>;

using namespace std;

int main() {

	int x = 10;
	int& y = x;

	y++;
	x++;

	cout << "x value: " << x << endl;
	cout << "y value: " << y << endl;

	cout << "x address: " << &x << endl;
	cout << "y address: " << &y << endl;


	return 0;
}