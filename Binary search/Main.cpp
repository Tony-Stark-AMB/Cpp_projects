#include <iostream>;
#include <cmath>;

using namespace std;

int main() {

	int arr[20] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

	int key;
	cout << "Please enter a number to find it from 1-20: ";
	cin >> key;

	int left = 0; // begining of arr
	int right = (sizeof(arr) / sizeof(arr[0])) - 1; // end of arr
	
	while (left <= right) {
		int middleOfArr = left + (right - left) / 2; // middle index;

		if (key == arr[middleOfArr]) {
			cout << "YOUR key: " << key << " is on the index " << middleOfArr;
			break;
		}
		if (key > arr[middleOfArr]) {
			left = middleOfArr + 1; // search right side (hight)
		}  
		if (key < arr[middleOfArr]) {
			right = middleOfArr + 1; // search left side (low)
		}
		
	}

	cout << "Your key " << key << " not found.";


	

	return 0;
}