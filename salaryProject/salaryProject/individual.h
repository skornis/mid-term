#pragma once
#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include "increaseSalary.h"

using namespace std;

class individual : public increaseSalary {
private: 
	double salary, percent, months;
	void setEmployeeSalaryInfo();//takes user input to set salary, date and month information to pass to increaseSalary for calculations

public:
	void printNewSalaryInfo();//outputs new salary calculations to screen
	individual(char);//default constructor to initialize process to get data to pass to increaseSalary function
};
