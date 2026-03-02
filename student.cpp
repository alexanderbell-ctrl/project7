#include "student.h"
#include "address.h"
#include "date.h"

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
	std::string tempGradDate;
	
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

	tempAddress = tempStreet + ", " + tempCity + ", " + tempState + ", " + tempZip;

	ss.clear();
	ss.str("");

	ss << tempCreditHours;
	ss >> creditHours;

	Address* address = new Address();
	Date* gradDate = new Date();
	Date* birthDate	= new Date();
	
	address->init(tempStreet, tempCity, tempState, tempZip);
	gradDate->init(tempGradDate);
	birthDate->init(tempBirthDate);

} // end init

void Student::printStudent(){
	std::cout << firstName << " " << lastName << std::endl;
	//std::cout << tempAddress;
	//std::cout << "DOB: " << tempBirthDate << std::endl;
	//std::cout << "Grad: " << tempGradDate << std::endl;
	//std::cout << "Credits: " << creditHours << std::endl;
} //end printStudent
