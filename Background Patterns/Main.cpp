#include <iostream>;

using namespace std;

int main() {

	int shapeSize = 4;

	for (int i = 0; i < shapeSize; i++) {
		for (int j = 0; j < shapeSize; j++) {
			if (i >= j)
				cout << "*";
		}
		cout << endl;
	}

	cout << "\n\n";

	for (int i = 0; i < shapeSize; i++) {
		for (int j = 0; j < shapeSize; j++) {
			if (i <= j) 
				cout << "*";
		} 
		cout << endl;
	}

	cout << "\n\n";

	for (int i = 0; i < shapeSize; i++) {
		for (int j = 0; j < shapeSize; j++) {
			if (i + j >= shapeSize - 1)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}

	cout << "\n\n";

	for (int i = 0; i < shapeSize; i++) {
		for (int j = 0; j < shapeSize; j++) {
			if (j < i)
				cout << " ";
			else
				cout << "*";
		}
		cout << endl;
	}

	return 0;
}