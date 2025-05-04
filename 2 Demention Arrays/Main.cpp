#include <iostream>;

using namespace std;

int main() {

	int matrixA[2][3] = { {2,5,7}, {5,8,12} };
	int matrixB[2][3] = { {6,4,5}, {1,6,1} };
	int matrixC[2][3];

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			matrixC[i][j] = matrixA[i][j] + matrixB[i][j];
			cout << matrixC[i][j] << " " << "|";
		}
		cout << endl;
	}

	return 0;
}