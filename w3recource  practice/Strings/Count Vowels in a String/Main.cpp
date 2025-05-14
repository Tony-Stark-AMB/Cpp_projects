#include <iostream>
#include <string>
#include <cctype>
#include <functional>
#include <vector>

std::function<bool(char)> Lower_Upper_Case_Condition(char ch) {
	return [ch](char inputCh) -> bool {
		return tolower(inputCh) == ch;
	};
};

int main() {
	using std::cout;
	using std::cin;
	using std::endl;

	char vowelsArr[5] = { 'a', 'e', 'i', 'o', 'u' };
	std::vector<std::function<bool(char)>> callStackVowelsConditionArr = {};

	for (char ch : vowelsArr) 
		callStackVowelsConditionArr.push_back(Lower_Upper_Case_Condition(ch));
	

	int counter = 0;

	char userInput[100];

	cout << "Please, enter some words to count their vowels: ";
	cin.getline(userInput, 100);

	for (char ch : userInput) {
		for (auto& cond: callStackVowelsConditionArr) {
			if (cond(ch)) {
				counter++;
				break;
			}
		}
	}

	cout << "Count of vowels is: " << counter;

	return 0;
}