#include <iostream>;
#include <cstring>;

using namespace std;

int main() {

	char userFullName[30];
	char userFullName2[30];
	cout << "Please, enter your name: ";
	cin.get(userFullName, 30);
	cout << "Welcome " << userFullName << endl;

	cin.ignore(); // for clear buffer of first cin.get() call;

	cout << "Please, enter your name Again: ";
	cin.get(userFullName2, 30);
	cout << "Welcome " << userFullName2 << endl;

	/* or use function cin.getline()
		char userFullName[30];
		char userFullName2[30];
		cout << "Please, enter your name: ";
		cin.getline(userFullName, 30);
		cout << "Welcome " << userFullName << endl;


		cout << "Please, enter your name Again: ";
		cin.getline(userFullName2, 30);
		cout << "Welcome " << userFullName2 << endl;
	*/

	return 0;
}