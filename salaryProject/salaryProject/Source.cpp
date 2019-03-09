#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include "employeeType.h"
#include "increaseSalary.h"
#include "individual.h"
#include "newFile.h"
#include <fstream>

using namespace std;

/*4.	Workers at a company have won a 7.6% pay increase retroactive for 6 months.
Write a program that takes an employee’s previous annual salary as input,
and outputs the amount of retroactive pay due the employee, the new annual salary,
and the new monthly salary.*/

void validateSelection(char);//validates user selection
void getData(string);//function to take input file data and call newFile functions
string fileName = "salaries.txt";//name of input file containing employee & salary info

int main() {
	char choice;

	cout << "This is a program to calculate your employee's new salary and retroactive pay due to them based on the percent increase.";
	cout << "\n\nYou may use this program to calculate individual salary increases or update your salary file.";
	cout << "\n\nWould you like to do an individual calculation or create a new salary file?";
	cout << "\n\tEnter 'I' for individual\n\tEnter 'F' to create an updated salary file:\n\n\t";
	cin >> choice;

	validateSelection(choice);

	cout << "\n\n\nThank you.\n\n";	   	
	system("pause");
	return 0;
}

void validateSelection(char choice) {
	switch(toupper(choice))
	{
	case 'I':
	{
		individual person(choice);
		person.printNewSalaryInfo();
		cout << "\n\n\nYour calculations are complete. Choose from the following to continue:";
		cout << "\n\n\t'X' to end the program\n\t'I' to perform another individual calculation\n\t'F' to import and update a file\n\n\t";
		cin >> choice;
		validateSelection(choice);
		break;
	}
	case 'F':
	{
		newFile clear(choice);
		getData(fileName);
		cout << "\n\n\nYour calculations are complete.";
		cout << "\nYour updates have been saved in the file:\n\t***Updated Employee Salaries.txt***.";
		break;
	}
	case 'X':
	{
		cout << "\n\n\nThank you.\n\n";
		system("pause");
		exit(0);
	}
	default: 
		cout << "\n\n\nI'm sorry, I did not recognize your input. Please choose from the following to continue:";
		cout << "\n\n\t'X' to end the program\n\t'I' to perform another individual calculation\n\t'F' to import and update a file\n\n\t";
		cin >> choice;
		validateSelection(choice);
	}
}

void getData(string file) {
	ifstream getInfo;
	getInfo.open(file);
	string last, first;
	double salary, percent, months;
	do {
		getInfo >> last >> first >> salary >> percent >> months;
		newFile update(last, first, salary, percent, months);
	} while (!getInfo.eof());
}
