#include <iostream>;

using namespace std;

int main() {

	float basicSalary, allowness, deductions, netSalary;
	cout << "Please give info about Basic Salary:";
	cin >> basicSalary;
	cout << "Please give info about Allowness Percentage"; 
	cin >> allowness;
	cout << "Please give info abour Deductions Percantage";
	cin >> deductions;

	netSalary = basicSalary + basicSalary * allowness / 100 - basicSalary * deductions / 100;

	cout << "Net salary is: " << netSalary;
	return 0;
}