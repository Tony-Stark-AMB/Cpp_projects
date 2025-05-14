#include <iostream>
#include <cstring>
#include <cctype>


bool isWordChar(char ch) {
    return isalnum(ch) || ch == '-' || ch == '\'' || ch == '+';
}

std::string Longest_Word(const std::string& text) {
    std::string longestWord, currentWord;

    for (size_t i = 0; i < text.length(); ++i) {
        char ch = text[i];

        if (isWordChar(ch)) {
            // Разрешаем '-' и '\'' только если они не на краях слова
            if ((ch == '-' || ch == '\'' || ch == '+') &&
                (currentWord.empty() || i + 1 == text.length() || !isalnum(text[i + 1]))) {
                continue; // Пропустить дефис/апостроф в начале или в конце "слова"
            }

            currentWord += ch;
        }
        else {
            if (currentWord.length() > longestWord.length()) {
                longestWord = currentWord;
            }
            currentWord.clear();
        }
        // Последняя проверка
        if (currentWord.length() > longestWord.length()) {
            longestWord = currentWord;
        }

        
    }
    return longestWord;
}

int main() {
	using std::cout;
	using std::endl;

    char userInput[100];
    
    cout << "Please, enter your string: ";
    std::cin.getline(userInput, 100);
    cout << "Longest word is: " << Longest_Word(userInput);

    return 0;
}