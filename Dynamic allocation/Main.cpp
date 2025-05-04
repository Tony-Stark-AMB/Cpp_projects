#include <iostream>;

using namespace std;

int main() {

	int *pointer = new int[5];
	pointer[0] = 12;
	pointer[1] = 13;

	cout << pointer[1] << endl;

	delete []pointer;
	pointer = nullptr;


	int *arr = new int[20];

	cout << arr << endl;

	delete []arr;

	arr = new int[40];

	cout << arr << endl;

	delete []arr;




	int A[5] = { 2,4,6,8,10 };
	int* p = A;

	cout << *p << endl; // show 2 because A[0];
	p++;
	cout << *p << endl; // show 4 becasue A[1];
	p--;
	cout << *p << endl; // show 2 becase A[0];

	cout << *p << endl; //000000B9F075F648 =>  adress of A[0];
	cout << *(p + 2) << endl; // 000000B9F075F656 => address of A[2];

	


	return 0;
}