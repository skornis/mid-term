#pragma once
#include <iostream>
#include <string>
#include "employeeType.h"

using namespace std;

class increaseSalary : public employeeType {
private:
	void setPercentIncrease(double);//sets annual percent increase
	void setMonths(double);//sets months for retroactive salary increase
	void setNewSalary();//sets new salary based on data provided
	void setBackPay();//calculates back pay by taking new salary - previous salary and calculating the difference over the time period in question

	double percentIncrease;
	double months;
	double newSalary;
	double backPay;

public: 
	increaseSalary(string, string, double, double, double);//takes name and salary data parameters to initialize salary increase and employeetype
	increaseSalary(double, double, double);//takes salary information only for individual calculations
	increaseSalary();//default, takes no arguments, defaults everything to 0
	double getNewSalary();//returns new salary
	double getBackPay();//returns calculated back pay amount
};