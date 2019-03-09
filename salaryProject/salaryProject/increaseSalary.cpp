#include <iostream>
#include <string>
#include "increaseSalary.h"
#include "employeeType.h"

using namespace std;

void increaseSalary::setPercentIncrease(double p) {
	if (p > 0)
		percentIncrease = p;
	else
		percentIncrease = 0;
}

void increaseSalary::setMonths(double m) {
	if (m > 0)
		months = m;
	else
		months = 0;
}

void increaseSalary::setNewSalary() {
	if (salary > 0)
	{
		newSalary = salary * (100 + percentIncrease) / 100;
	}
	else newSalary = 0;
}

double increaseSalary::getNewSalary() {
	return newSalary;
}

void increaseSalary::setBackPay() {
	backPay = (newSalary - salary) / 12 * months;
}

double increaseSalary::getBackPay() {
	return backPay;
}

increaseSalary::increaseSalary(string l, string f, double s, double p, double m) : employeeType(l, f, s){
	setPercentIncrease(p);
	setMonths(m);
	setNewSalary();
	setBackPay();
}

increaseSalary::increaseSalary(double s, double p, double m) : employeeType(s) {
	setPercentIncrease(p);
	setMonths(m);
	setNewSalary();
	setBackPay();
}

increaseSalary::increaseSalary() : employeeType (){
	percentIncrease = 0;
	months = 0;
	newSalary = 0;
	backPay = 0;
}