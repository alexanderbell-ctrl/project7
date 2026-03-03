#include <iostream>
#include <sstream>

#include "date.h"

Date::Date(){
	month = 11;
	day = 11;
	year = 1111;
} //end constructor
 
void Date::init(std::string dateString){
	std::string stringMonth;
	std::string stringDay;
	std::string stringYear;
	std::stringstream converter;

	converter.str(dateString);
	getline(converter, stringMonth, '/');
	getline(converter, stringDay, '/');
	getline(converter, stringYear);

	converter.clear();
	converter.str("");

	converter << stringMonth << " " << stringDay << " " <<stringYear;
	converter >> month >> day >> year;
} //end init

void Date::printDate(){
	std::cout << month << ", " << day << ", " << year << std::endl;
} //end printDate
