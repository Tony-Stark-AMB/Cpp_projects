#include <iostream>;

using namespace std;

int main() {

	int arr[] = { 1,4,6,8,2135,3264,23626,124 };

	int key = 4;

	for(int i = 0; i < 8; i++){
		if (arr[i] == key) {
			cout << "Position of key is: " << i;
			break;
		}
	}

	return 0;
}