#include "student.h"
#include "address.h"
#include "date.h"

#include <iostream>
#include <sstream>

Student::Student(){
	
} //end constructor

void Student::init(std::string studentString){
	//std::string firstName;
	//std::string lastName;
	std::string tempCreditHours;
	std::stringstream ss;

	std::string tempStreet, tempCity, tempState, tempZip;

	std::string tempBirthDate, tempGradDate;
	
	ss.str(studentString);
	getline(ss, lastName, ',');
	getline(ss, firstName, ',');
	getline(ss, tempStreet, ',');
	getline(ss, tempCity, ',');
	getline(ss, tempState, ',');
	getline(ss, tempZip, ',');
	getline(ss, tempBirthDate, ',');
	getline(ss, tempGradDate, ',');
	getline(ss, tempCreditHours, ',');

	ss.clear();
	ss.str("");

	ss << tempCreditHours;
	ss >> creditHours;

	address = new Address();
	gradDate = new Date();
	birthDate = new Date();
	
	address->init(tempStreet, tempCity, tempState, tempZip);
	gradDate->init(tempGradDate);
	birthDate->init(tempBirthDate);

} // end init

void Student::printStudent(){
	std::cout << firstName << " " << lastName << std::endl;

	address->printAddress();

	std::cout << "DOB: ";
	birthDate->printDate();

	std::cout << "Grad: ";
	gradDate->printDate();

	std::cout << "Credits: " << creditHours << std::endl;

} //end printStudent

Student::~Student(){
	delete address;
	delete gradDate;
	delete birthDate;
} //end destructor
