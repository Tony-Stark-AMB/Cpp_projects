#include <iostream>;

using namespace std;

int main() {

	char x = 127;

	x++;


	cout << (int)x << endl; // -128 

	/*
		It happends because of circle
		that means -128...127 
	*/

	char y = -128;

	y--;

	cout << (int)y << endl; // 127

	return 0;
}