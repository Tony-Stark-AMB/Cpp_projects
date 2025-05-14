#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

	int countOfTries = 1, randomNumber, userChoice, userNumber;

	cout << "\t\tGUESS MY NUMBER\n\n";
	cout << "Menu:\n\n";
	cout << "1. Start\n";
	cout << "2. End\n\n";
	cin >> userChoice;
	if (userChoice) {

		cout << "Hi!\nLet`s you guess my number?\nIt have range from 1 to 100:";
		cout << "I wished for a number for you.\nCommon you can do this";

		srand(static_cast<unsigned int>(time(0)));

		int randomNumber = (rand() % 100) + 1;
		cout << "\nPlease enter the number:";
		cin >> userNumber;

		while (randomNumber != userNumber) {
			cout << "\nPlease enter the number:";
			cin >> userNumber;
			cout << "\nI will help you every time, when you will try to guess a wished number:";
			int condition = randomNumber - userNumber;

			if (condition <= -50) {
				cout << "\nToo cold..., number must be lower on 50 and more";
			}
			else if (condition <= -10 && condition >= -25) {
				cout << "\nYou are not far from your goal, come on — take a lower number!";
			}
			else if (condition <= -5 && condition >= -10) {
				cout << "\nYou are near the goal, take some lower number!";
			}
			else if (condition < 0) {
				cout << "\nYou as near as possible!!!";
			}
			else if (condition >= 5 && condition <= 10) {
				cout << "\nYou are near the goal, take some higher number!";
			}
			else if (condition >= 10 && condition <= 25) {
				cout << "\nYou are not far from your goal, come on — take a higher number!";
			}
			else if (condition >= 25 && condition <= 50) {
				cout << "\nYou are far, please take a bigger number!";
			}
			else if (condition >= 50) {
				cout << "\nToo cold..., number must be bigger by 50 or more";
			}
			countOfTries++;
		}
		cout << "\n\nYou WIN!!!.\nYou guess my number: " << randomNumber;
		cout << "\nYou spend about: " << countOfTries << " times, to find a number";
 	} else {
		cout << "\n\nThanks for playing";
	}



	return 0;
}