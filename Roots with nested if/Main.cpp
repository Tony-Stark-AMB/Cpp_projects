#include <iostream>;

using namespace std;



int main() {

	int a, b, c, root1, root2;

	cout << "Please enter value of a:";
	cin >> a;
	cout << "Please enter value of b:";
	cin >> b;
	cout << "Please enter value of c:";
	cin >> c;

	const int discriminant = b * b - 4 * a * c;

	root1 = (-b + sqrt(discriminant)) / (2 * a);
	root2 = (-b - sqrt(discriminant)) / (2 * a);


	if (discriminant == 0) {
		cout << "real and equal " << root1;
	}
	else if (discriminant > 0) {
		cout << "real and unequal " << root1 << " " << root2;
	}
	else {
		cout << "imaginary";
	}

	


	return 0;
}