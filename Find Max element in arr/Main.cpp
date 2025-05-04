#include <iostream>;

using namespace std;

int main() {

	int arr[] = { 1,2,4,6,8,21331,123,25 };
	int maxNum = arr[0];

	for (int i = 0; i < 8; i++) {
		if (arr[i] > maxNum) {
			maxNum = arr[i];
		}
	}

	cout << "MaxNum is: " << maxNum;

	return 0;
}