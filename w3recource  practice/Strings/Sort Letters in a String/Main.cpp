#include <iostream>
#include <algorithm>
#include <string>


std::string Sorted_String(const std::string& text ) {

	std::string result = text;
	std::sort(result.begin(), result.end());  // сортируем по возрастанию ASCII
	return result;

	return result;
}

int main() {

	char userInput[100];

	std::cout << "Please, enter a string: ";
	std::cin.getline(userInput, 100);
	
	std::cout << "Sorted string: " << Sorted_String(userInput);

	return 0;
}