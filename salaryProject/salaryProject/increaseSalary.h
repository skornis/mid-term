#pragma once
#include <iostream>
#include <string>
#include "employeeType.h"

using namespace std;

class increaseSalary : public employeeType {
private:
	void setPercentIncrease(double);
	void setMonths(double);
	void setNewSalary();
	void setBackPay();

	double percentIncrease;
	double months;
	double newSalary;
	double backPay;

public: 
	increaseSalary(string, string, double, double, double);
	increaseSalary(double, double, double);
	increaseSalary();
	double getNewSalary();
	double getBackPay();
};