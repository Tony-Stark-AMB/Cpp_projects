#include <iostream>;

using namespace std;

int main() {

	int r;

	float area;

	cout << "Enter the radius of circle: ";
	cin >> r;

	area = 3.1425f * r * r;

	cout << "Area of circle with radius: " << r << " is: " << area;


	return 0;
}