#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include "increaseSalary.h"
#include "newFile.h"

using namespace std;

void newFile::updateSalaryFile(string l, string f) {
	createNew.open(outputFile, ios_base::app);
	createNew << f << " " << l;
	createNew << fixed << setprecision(2) << "'s new annual salary is: $" << getNewSalary() << ", the new monthly salary is: $" << getNewSalary() / 12;
	createNew << " and the back pay is : $" << getBackPay() << endl;
	createNew.close();
}

newFile::newFile(string l, string f, double s, double p, double m) : increaseSalary(l, f, s, p, m) {
	updateSalaryFile(l, f);
}

newFile::newFile(char c) : increaseSalary() {
	createNew.open(outputFile);
	createNew.close();
}