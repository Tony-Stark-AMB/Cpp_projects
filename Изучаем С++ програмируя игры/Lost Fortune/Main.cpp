#include <iostream>
#include <string>
#include <windows.h>
#include <fcntl.h>
#include <io.h>

using namespace std;

int main() {

	_setmode(_fileno(stdout), _O_U16TEXT);
	_setmode(_fileno(stdin), _O_U16TEXT);


	const int GOLD_PIECES = 900;

	int adventurers, killed, survivors;
	wstring leader;

	wcout << L"Раді вас вітати!!!\n\nУ грі:\n\"Втрачена фортуна\"\n\n";
	wcout << L"Будь ласка, введіть кількість шукачів пригод: ";
	wcin >> adventurers;
	wcout << L"Будь ласка, введіть число, меньше за минуле: ";
	wcin >> killed;
	survivors = adventurers - killed;
	wcout << L"Введіть ваше прізвище: ";
	wcin >> leader;
	wcout << L"Сюжет\n\n";
	wcout << L"Хоробра група з " << adventurers << L" обрала собі квест ";
	wcout << L"У пошуках загубленого скарба Прадваніх Дворфів (гномів)\n";
	wcout << L"Група була під керівництвом видатного лідера - " << leader << ".\n";
	wcout << L"\nВпродовж довгої дороги, група натрапила на засідку орків. ";
	wcout << L"\nУсі хоробро билися, під командуванням лідера: " << leader;
	wcout << L"\nТа орки були переможені. Проте ціною " << killed << L" переможених шукачів пригод";
	wcout << L"\nЗалишилось лише " << survivors << L" у групі.\n";
	wcout << L"\nГрупа вже втратила надію...";
	wcout << L"\nВ той час, коли вони упокоювали, загинувших...";
	wcout << L"\nВони знайшли скриню фортуни";
	wcout << L"\nДалі шукачі пригод поділили порівну " << GOLD_PIECES << L" золотих монет, між собою.";
	wcout << L"\nПроте, лідер " << leader << L" отримав трішки більше золота " << (GOLD_PIECES % survivors);
	wcout << L"\nЩоб усе було по чистій совісті. (авжеж)";


	return 0;
}