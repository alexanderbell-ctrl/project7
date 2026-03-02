#include "student.cpp"
#include <iostream>
#include <sstream>

Student::Student(){
	
} //end constructor

void Student::init(std::string studentString){
	std::string firstName;
	std::string lastName;
	std::string tempCreditHours;
	int credtiHours;
	std::stringstream ss;

	std::string tempStreet;
	std::string tempCity;
	std::string tempState;
	std::string tempZip;
	std::string tempAddress;

	std::string tempBirthDate;
	std::string tempGradDate
	
	ss.str(studentString);
	getLine(ss, lastname, ',');
	getLine(ss, firstname, ',');
	getLine(ss, lastname, ',');
	getLine(ss, tempStreet, ',');
	getLine(ss, tempCity, ',');
	getLine(ss, tempState, ',');
	getLine(ss, tempZip, ',');
	getLine(ss, tempbirthDate, ',');
	getLine(ss, tempgradDate, ',');
	getLine(ss, tempCreditHours, ',');

	tempAddress = tempStreet + ", " + tempCity + ", " + tempState + ", " + tempZip

	ss.clear();
	ss.str("");

	converter << tempCreditHours;
	converter >> creditHours

} // end init

void Student::printStudent(){
	std::cout << firstname << " " << lastname << std::endl;
	std::cout << tempAddress;
	std::cout << "DOB: " << tempbirthDate << std::endl;
	std::cout << "Grad: " << tempgradDate << std::endl;
	std::cout << "Credits: " << creditHours << std::endl;
} //end printStudent
