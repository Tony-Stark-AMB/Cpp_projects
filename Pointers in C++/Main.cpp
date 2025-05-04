#include <iostream>;

using namespace std;

int main() {

	int x = 10;
	//int *p; // declaration of pointer (address variable);
	int *p = &x; // initialization of pointer;

	cout << *p << endl; //dereferencing;

	cout << x << endl; 
	cout << &x << endl;
	cout << p << endl;
	cout << &p << endl;
	cout << *p << endl;

	return 0;
}