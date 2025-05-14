#include <iostream>;
#include <cstring>;

using namespace std;

int main() {
	
	char string1[20] = "Hello World";

	cout << strlen(string1) << endl;
	 
	char* string2 = new char[100];

	cout << "Please, enter a string (with spaces): " << endl;
	cin.getline(string2, 100);
	cout << "Length " << strlen(string2) << endl;

	delete[] string2;

	cout << "====================" << endl;
	cout << "strcat_s (string concantination fn)" << endl;

	char string3[20] = "Good";
	char string4[20] = "Morning";
	cout << "string3 value: " << string3 << endl;
	cout << "string4 value: " << string4 << endl;

	strcat_s(string3, " ");
	strcat_s(string3, string4);

	cout << "Result of concantination string3 and string4: " << string3 << endl;

	cout << "====================" << endl;
	cout << "strncat_s (string concantination fn with adding length of second part)" << endl;

	char string5[20] = "Well";
	char string6[20] = "Done12313";

	cout << "string5 value: " << string5 << endl;
	cout << "string6 value: " << string6 << endl;

	strcat_s(string5, " ");
	strncat_s(string5, string6, 4);

	cout << "Result of concationation string5 and string6: " << string5 << endl;

	cout << "====================" << endl;
	cout << "strncat_s (string copy fn)" << endl;

	char string7[20] = "Nice";
	char string8[20] = "";

	strcpy_s(string8, string7);

	cout << "Result of copying from string7 to string8: " << string8 << endl;

	cout << "====================" << endl;
	cout << "strncpy (string copy fn with adding length of second part)" << endl;

	char string9[40] = "Don`t warry. It`s good, my friend";
	char string10[40] = "";

	strncpy_s(string10, string9, 12);

	cout << "Result of copying from string9 to string10: " << string10 << endl;

	cout << "====================" << endl;
	cout << "strstr (checking that part is exist in string)" << endl;

	char string11[20] = "Litecooking";

	cout << "Let`s get substring from string \"Litecooking\"" << endl;

	char* answer1 = strstr(string11, "Cook");
	char* answer2 = strstr(string11, "cook");

	if (answer1 == NULL)
		cout << "Result with substring \"Cook\": not exist" << endl;
	else
		cout << "Result with substring \"Cook\": " << answer1 << endl;


	if(answer2 == NULL)
		cout << "Result with substring \"cook\": not exist" << endl;
	else 
		cout << "Result with substring \"cook\": " << answer2 << endl;

	//delete answer1;
	//delete answer2;
	
	cout << "====================" << endl;
	cout << "strchr (show substring from character in string and check does it exist)" << endl;

	char string12[20] = "CoCa-Cola";

	char* answer3 = strchr(string12, 'k');
	char* answer4 = strchr(string12, 'C');

	if (answer3 == NULL)
		cout << "Result that character \'k\' not exist in string: " << string12 << endl;
	else
		cout << "Result that substring from character \'k\' is: " << answer3 << endl;

	if(answer4 == NULL)
		cout << "Result that character \'C\' not exist in string: " << string12 << endl;
	else 
		cout << "Result that substring from character \'C\' is: " << answer4 << endl;

	cout << "====================" << endl;
	cout << "strrchr (show substring from character in string and check does it exist from right to left)" << endl;

	char string13[20] = "CoCa-Cola";

	char* answer5 = strrchr(string13, 'k');
	char* answer6 = strrchr(string13, 'C');

	if (answer5 == NULL)
		cout << "Result that character \'k\' not exist in string: " << string13 << endl;
	else
		cout << "Result that substring from character \'k\' is: " << answer5 << endl;

	if (answer6 == NULL)
		cout << "Result that character \'C\' not exist in string: " << string13 << endl;
	else
		cout << "Result that substring from character \'C\' is: " << answer6 << endl;

	cout << "====================" << endl;
	cout << "strcmp (compare two strings by ASCII codes and come back their difference)" << endl;

	char string14[20] = "Hello";
	char string15[20] = "Hello";

	cout << "Result \"Hello\" and \"Hello\": " << strcmp(string14, string15) << endl; // 0;

	char string16[20] = "hello";
	char string17[20] = "Hello";

	cout << "Result \"hello\" and \"Hello\": " << strcmp(string16, string17) << endl; // 32;

	char string18[20] = "HellO";
	char string19[20] = "Hello";

	cout << "Result \"hello\" and \"Hello\": " << strcmp(string18, string19) << endl; // -32;

	cout << "====================" << endl;
	return 0;
}