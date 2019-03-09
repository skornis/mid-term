#pragma once
#include <iostream>
#include <string>
#include "employeeType.h"

using namespace std;

class employeeType {
private:
	void setLastName(string);
	void setFirstName(string);
	void setAnnualSalary(double);

	string lastName;
	string firstName;
	
public: 
	double getAnnualSalary();//returns annual salary
	employeeType();//default to initialize everything to 0
	employeeType(string, string, double);//takes name and salary input to perform calculations
	employeeType(double);//takes salary input only to perform calculations
	double salary;
};