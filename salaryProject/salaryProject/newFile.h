#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include "increaseSalary.h"

using namespace std;

class newFile : public increaseSalary {
private:
	string fileName = "salaries.txt";//set file name, can be replaced with file path
	string outputFile = "Updated Employee Salaries.txt";//set output file name, could be replaced with user defined path & name
	ofstream createNew;//designates new output file, delcared to allow file to be cleared prior to accepting all new input
	void updateSalaryFile(string l, string f);//passes information to take input information and create data for output file

public: 
	newFile(string, string, double, double, double);//accepts parameters to initialize increaseSalary & employeeType data
	newFile(char);//default constructor to initialize and clear the output file
};
