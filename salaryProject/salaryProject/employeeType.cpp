#include <iostream>
#include <string>
#include "employeeType.h"

using namespace std;

void employeeType::setLastName(string name) {
	lastName = name;
}

void employeeType::setFirstName(string name) {
	firstName = name;
}

double employeeType::getAnnualSalary() {
	return salary;
}

void employeeType::setAnnualSalary(double s) {
	if (salary > 0)
		salary = s;
	else
		salary = 0;
}

employeeType::employeeType() {
	lastName = "";
	firstName = "";
	salary = 0;
}

employeeType::employeeType(string l, string f, double s) {
	lastName = l;
	firstName = f;
	salary = s;
}

employeeType::employeeType(double s) {
	lastName = "";
	firstName = "";
	salary = s;
}

