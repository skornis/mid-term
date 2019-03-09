#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include "increaseSalary.h"
#include "individual.h"

using namespace std;

void individual::setEmployeeSalaryInfo() {
	cout << "\n\nPlease enter the current salary for the employee: $";
	cin >> salary;
	cout << "\n\nThe percent increase will be entered as the percent value without the percentage sign.";
	cout << "\n***For example, 5 % would be entered as 5.0. An increase of 7.5% would be entered as 7.5.***";
	cout << "\n\nPlease enter the percent pay increase: ";
	cin >> percent;
	cout << "\n\nPlease enter the number of months this pay increase should be retroactive for: ";
	cin >> months;
}

void individual::printNewSalaryInfo() {
	increaseSalary newPay(salary, percent, months);

	double newSalary = newPay.getNewSalary();
	double backPay = newPay.getBackPay();

	cout << fixed << setprecision(2) << "\n\nThe new annual salary for the employee is: $" << newSalary << ".";
	cout << fixed << setprecision(2) << "\n\nThe new monthly salary is: $" << newSalary / 12 << ".";
	cout << fixed << setprecision(2) << "\n\nThe back pay for " << months << " months is: $" << backPay << ".";
}

individual::individual(char) : increaseSalary() {
	setEmployeeSalaryInfo();
}